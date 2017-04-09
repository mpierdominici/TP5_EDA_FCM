#pragma once
#include "genericState.h"
#include "Cwait.h"
class Wrq :public genericState
{
	genericState * onTimeOut(genericEvent * ev);
	genericState * onError(genericEvent * ev);
	genericState * onRack(genericEvent * ev);
	genericState * onLack(genericEvent * ev);
};