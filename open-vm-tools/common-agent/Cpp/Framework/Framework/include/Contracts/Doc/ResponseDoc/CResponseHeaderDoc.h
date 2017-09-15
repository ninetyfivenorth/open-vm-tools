/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppDoc". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CResponseHeaderDoc_h_
#define CResponseHeaderDoc_h_

namespace Caf {

/// A simple container for objects of type ResponseHeader
class CResponseHeaderDoc {
public:
	CResponseHeaderDoc() :
		_sequenceNumber(0),
		_isFinalResponse(true),
		_sessionId(CAFCOMMON_GUID_NULL),
		_isInitialized(false) {}
	virtual ~CResponseHeaderDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::string version = "1.0",
		const std::string createdDateTime = CDateTimeUtils::getCurrentDateTime(),
		const uint32 sequenceNumber = 0,
		const bool isFinalResponse = true,
		const UUID sessionId = CAFCOMMON_GUID_NULL) {
		if (! _isInitialized) {
			_version = version;
			_createdDateTime = createdDateTime;
			_sequenceNumber = sequenceNumber;
			_isFinalResponse = isFinalResponse;
			_sessionId = sessionId;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the version
	std::string getVersion() const {
		return _version;
	}

	/// Accessor for the date/time when the request was created
	std::string getCreatedDateTime() const {
		return _createdDateTime;
	}

	/// Accessor for the sequenceNumber
	uint32 getSequenceNumber() const {
		return _sequenceNumber;
	}

	/// Accessor for the version
	bool getIsFinalResponse() const {
		return _isFinalResponse;
	}

	/// Accessor for the session ID
	UUID getSessionId() const {
		return _sessionId;
	}

private:
	std::string _version;
	std::string _createdDateTime;
	uint32 _sequenceNumber;
	bool _isFinalResponse;
	UUID _sessionId;
	bool _isInitialized;

private:
	CAF_CM_DECLARE_NOCOPY(CResponseHeaderDoc);
};

CAF_DECLARE_SMART_POINTER(CResponseHeaderDoc);

}

#endif