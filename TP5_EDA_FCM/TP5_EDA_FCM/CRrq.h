#pragma once
#include "genericState.h"
#include "Cwait.h"
class Rrq :public genericState
{
public:
	genericState * onError(genericEvent * ev);
	genericState * onTimeOut(genericEvent * ev);
	genericState * onRdata(genericEvent * ev);
	genericState * onLdata(genericEvent * ev);
};