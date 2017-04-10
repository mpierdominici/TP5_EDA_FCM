#pragma once
#include "genericState.h"
#include  "Cwait.h"
#include "Cwrq.h"
class fWrq :public genericState
{
	genericState * onTimeOut(genericEvent * ev);
	genericState * onError(genericEvent * ev);
	genericState * onRack(genericEvent * ev);

};