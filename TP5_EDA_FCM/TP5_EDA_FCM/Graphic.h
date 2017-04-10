#pragma once
#include "genericEvent.h"
#include "genericState.h"
#include "genericFCM.h"
class Graphic
{
public:
	Graphic(bool);
	~Graphic();
	void printEv(genericEvent * myEvent);
	void printExecutedAction(void);
protected:
	void printBase(void);
	void printLastEv(void)
	genericEvent * actualEv;
	genericEvent * lastEv;
	bool isAClient;
};