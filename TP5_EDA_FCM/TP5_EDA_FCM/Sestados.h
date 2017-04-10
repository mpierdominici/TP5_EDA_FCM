#pragma once
#include "genericState.h"

class wait_t : public genericState
{
public:
	genericState * onRWrq(genericEvent * ev);
	genericState * onRRrq(genericEvent * ev);

};
class wrq : public genericState
{
public:
	genericState * onTimeOut(genericEvent * ev);
	genericState * onError(genericEvent * ev);
	genericState * onRdata(genericEvent * ev);
	genericState * onLdata(genericEvent * ev);
};
class rrq : public genericState
{
public:
	genericState * onTimeOut(genericEvent * ev);
	genericState * onError(genericEvent * ev);
	genericState * onRack(genericEvent * ev);
	genericState * onLack(genericEvent * ev);

};