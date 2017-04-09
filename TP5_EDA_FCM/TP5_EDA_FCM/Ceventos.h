#pragma once
#include "genericEvent.h"

class timeOUT : public genericEvent
{

public :
		timeOUT();
};
class error : public genericEvent
{

public:
	error();
};
class rAck : public genericEvent
{

public:
	rAck();
};
class rData : public genericEvent
{

public:
	rData();
};
class rWrq : public genericEvent
{

public:
	rWrq();
};
class rRrq : public genericEvent
{

public:
	rRrq();
};
class fAck : public genericEvent
{

public:
	fAck();
};
class lAck : public genericEvent
{

public:
	lAck();
};
class fData : public genericEvent
{

public:
	fData();
};
class lData : public genericEvent
{

public:
	lData();
};