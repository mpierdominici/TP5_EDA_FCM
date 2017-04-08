#pragma once
#include "genericEvent.h"
class genericState
{
public:
	virtual genericState * onRWrq(genericEvent * ev);
	virtual genericState * onRRrq(genericEvent * ev); 
	virtual genericState * onTimeOut(genericEvent * ev);
	virtual genericState * onError(genericEvent * ev);
	virtual genericState * onRack(genericEvent * ev);
	virtual genericState * onRdata(genericEvent * ev);

};

