#pragma once
#include "genericState.h"
#include "Cwait.h"
#include "CRrq.h"
class fRrq :public genericState
{
public:
	genericState * onError(genericEvent * ev);
	genericState * onTimeOut(genericEvent * ev);
	genericState * onRdata(genericEvent * ev);
};