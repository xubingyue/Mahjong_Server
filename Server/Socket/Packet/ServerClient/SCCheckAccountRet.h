﻿#ifndef _SC_CHECK_ACCOUNT_RET_H_
#define _SC_CHECK_ACCOUNT_RET_H_

#include "Packet.h"

class SCCheckAccountRet : public Packet
{
public:
	SCCheckAccountRet(const PACKET_TYPE& type)
		:
		Packet(type)
	{
		fillParams();
		zeroParams();
	}
	virtual void fillParams()
	{
		pushParam(mResult, "result");
	}
	virtual void execute(){}
	virtual std::string debugInfo()
	{
		COMMAND_DEBUG("flag : %d", mResult);
	}
public:
	int mResult;			// 为0不存在,1表示已存在
};

#endif