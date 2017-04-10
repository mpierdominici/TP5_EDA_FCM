#include"genericFCM.h"

void genericFcm::dispatch(genericEvent * ev)
{
	genericState * newState = NULL; //variable donde almaceno el nuevo estado recivido

	switch (ev->type().ev)
	{
	case TIME_OUT:
		newState = currentState->onTimeOut(ev);
		break;
	case ERROR:
		newState = currentState->onError(ev);
		break;
	case R_ACK:
		newState = currentState->onRack(ev);
		break;
	case R_DATA:
		newState = currentState->onRdata(ev);
		break;
	case R_WRQ:
		newState = currentState->onRWrq(ev);
		break;
	case R_RRQ:
		newState = currentState->onRRrq(ev);
		break;
	case F_ACK:
		newState = currentState->onFack(ev);
		break;
	case L_ACK:
		newState = currentState->onLack(ev);
		break;
	case F_DATA:
		newState = currentState->onFdata(ev);
		break;
	case L_DATA:
		newState = currentState->onLdata(ev);
		break;
		
	}
	if (newState != NULL)
	{
		delete currentState;
		currentState = newState;
	}
	delete ev;
}
