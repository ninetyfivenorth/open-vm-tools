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

#ifndef LogicalRelationshipXml_h_
#define LogicalRelationshipXml_h_


#include "Doc/SchemaTypesDoc/CLogicalRelationshipDoc.h"

#include "Doc/DocXml/SchemaTypesXml/SchemaTypesXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the LogicalRelationship class to/from XML
	namespace LogicalRelationshipXml {

		/// Adds the LogicalRelationshipDoc into the XML.
		void SCHEMATYPESXML_LINKAGE add(
			const SmartPtrCLogicalRelationshipDoc logicalRelationshipDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the LogicalRelationshipDoc from the XML.
		SmartPtrCLogicalRelationshipDoc SCHEMATYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
