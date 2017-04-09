
#include <Cstdio>
#include "eventGenerator.h"
#include "Ceventos.h"
genericEvent * eventGenerator()
{
	switch (getchar())
	{
	case 'a':
		return new rWrq;
		break;
	case 's':
		return new rRrq;
		break;
	case 'd':
		return new timeOUT;
		break;
	case 'f':
		return new error;
		break;
	case 'g':
		return new rAck;
		break;
	case 'h':
		return new rData;
		break;
	case 'j':
		return new lAck;
		break;
	case 'k':
		return new lData;
		break;
	case 'l':
		return new fAck;
		break;
	case 'z':
		return new fData;
		break;
	default:
		return NULL;
		break;
	}

}