#pragma once
#include "genericState.h"
#include "CfRrq.h"
#include"CfWrq.h"
class wait :public genericState 
{
public:
	genericState * onFack(genericEvent * ev);
	genericState * onFdata(genericEvent * ev);
	
};