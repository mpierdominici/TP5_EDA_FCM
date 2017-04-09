#pragma once
#include "genericState.h"
#include "CfRrq.h"
#include"CfWrq.h"
class wait :public genericState 
{
	genericState * onFack(genericEvent * ev);
	genericState * onFdata(genericEvent * ev);
	
};