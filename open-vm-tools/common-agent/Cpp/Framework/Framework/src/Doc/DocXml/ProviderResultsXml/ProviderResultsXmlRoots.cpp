/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#include "stdafx.h"

#include "Doc/DocXml/ProviderResultsXml/CdifXml.h"
#include "Doc/DocXml/ProviderResultsXml/SchemaXml.h"

#include "Doc/ProviderResultsDoc/CCdifDoc.h"
#include "Doc/ProviderResultsDoc/CSchemaDoc.h"
#include "Xml/XmlUtils/CXmlElement.h"
#include "Doc/DocXml/ProviderResultsXml/ProviderResultsXmlRoots.h"

using namespace Caf;

std::string XmlRoots::saveSchemaToString(
	const SmartPtrCSchemaDoc schemaDoc) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "saveSchemaToString");

	std::string rc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(schemaDoc);

		const std::string schemaNamespace = DocXmlUtils::getSchemaNamespace("cmdl");
		const std::string schemaLocation = DocXmlUtils::getSchemaLocation("cmdl/ProviderResults.xsd");

		const SmartPtrCXmlElement rootXml = CXmlUtils::createRootElement(
			"schema", schemaNamespace, schemaLocation);
		SchemaXml::add(schemaDoc, rootXml);

		rc = rootXml->saveToString();
	}
	CAF_CM_EXIT;

	return rc;
}

SmartPtrCSchemaDoc XmlRoots::parseSchemaFromString(
	const std::string xml) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "parseSchemaFromString");

	SmartPtrCSchemaDoc schemaDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_STRING(xml);

		const SmartPtrCXmlElement rootXml = CXmlUtils::parseString(xml, "caf:schema");
		schemaDoc = SchemaXml::parse(rootXml);
	}
	CAF_CM_EXIT;

	return schemaDoc;
}

void XmlRoots::saveSchemaToFile(
	const SmartPtrCSchemaDoc schemaDoc,
	const std::string filePath) {
	CAF_CM_STATIC_FUNC_LOG_VALIDATE("XmlRoots", "saveSchemaToFile");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(schemaDoc);
		CAF_CM_VALIDATE_STRING(filePath);

		CAF_CM_LOG_DEBUG_VA1("Saving to file - %s", filePath.c_str());

		const std::string schemaStr =
			saveSchemaToString(schemaDoc);
		FileSystemUtils::saveTextFile(filePath, schemaStr);
	}
	CAF_CM_EXIT;
}

SmartPtrCSchemaDoc XmlRoots::parseSchemaFromFile(
	const std::string filePath) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "parseSchemaFromFile");

	SmartPtrCSchemaDoc schemaDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_STRING(filePath);

		const SmartPtrCXmlElement rootXml = CXmlUtils::parseFile(filePath, "caf:schema");
		schemaDoc = SchemaXml::parse(rootXml);
	}
	CAF_CM_EXIT;

	return schemaDoc;
}

std::string XmlRoots::saveCdifToString(
	const SmartPtrCCdifDoc cdifDoc) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "saveCdifToString");

	std::string rc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(cdifDoc);

		const std::string schemaNamespace = DocXmlUtils::getSchemaNamespace("cmdl");
		const std::string schemaLocation = DocXmlUtils::getSchemaLocation("cmdl/ProviderResults.xsd");

		const SmartPtrCXmlElement rootXml = CXmlUtils::createRootElement(
			"cdif", schemaNamespace, schemaLocation);
		CdifXml::add(cdifDoc, rootXml);

		rc = rootXml->saveToString();
	}
	CAF_CM_EXIT;

	return rc;
}

SmartPtrCCdifDoc XmlRoots::parseCdifFromString(
	const std::string xml) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "parseCdifFromString");

	SmartPtrCCdifDoc cdifDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_STRING(xml);

		const SmartPtrCXmlElement rootXml = CXmlUtils::parseString(xml, "caf:cdif");
		cdifDoc = CdifXml::parse(rootXml);
	}
	CAF_CM_EXIT;

	return cdifDoc;
}

void XmlRoots::saveCdifToFile(
	const SmartPtrCCdifDoc cdifDoc,
	const std::string filePath) {
	CAF_CM_STATIC_FUNC_LOG_VALIDATE("XmlRoots", "saveCdifToFile");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(cdifDoc);
		CAF_CM_VALIDATE_STRING(filePath);

		CAF_CM_LOG_DEBUG_VA1("Saving to file - %s", filePath.c_str());

		const std::string cdifStr =
			saveCdifToString(cdifDoc);
		FileSystemUtils::saveTextFile(filePath, cdifStr);
	}
	CAF_CM_EXIT;
}

SmartPtrCCdifDoc XmlRoots::parseCdifFromFile(
	const std::string filePath) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "parseCdifFromFile");

	SmartPtrCCdifDoc cdifDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_STRING(filePath);

		const SmartPtrCXmlElement rootXml = CXmlUtils::parseFile(filePath, "caf:cdif");
		cdifDoc = CdifXml::parse(rootXml);
	}
	CAF_CM_EXIT;

	return cdifDoc;
}
