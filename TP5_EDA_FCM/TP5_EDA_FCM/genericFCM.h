#pragma once
#include"genericEvent.h"
#include "genericState.h"
class genericFcm
{
public:
	void dispatch(genericEvent * ev);


protected:
	genericState  * currentState;


};

