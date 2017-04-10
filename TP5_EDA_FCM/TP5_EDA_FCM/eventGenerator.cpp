
#include <Cstdio>
#include "eventGenerator.h"
#include "Ceventos.h"
genericEvent * eventGenerator()
{
	char c;
	c = getchar();
		if (c != '\n')
		{
			while (getchar() != '\n')
			{

			}

		}
	switch (c)
	{
	case 'a':case 'A':
		return new rWrq;
		break;
	case 's':case 'S':
		return new rRrq;
		break;
	case 'd':case 'D':
		return new timeOUT;
		break;
	case 'f':case 'F':
		return new error;
		break;
	case 'g':case 'G':
		return new rAck;
		break;
	case 'h':case 'H':
		return new rData;
		break;
	case 'j':case 'J':
		return new lAck;
		break;
	case 'k':case 'K':
		return new lData;
		break;
	case 'l':case 'L':
		return new fAck;
		break;
	case 'z':case 'Z':
		return new fData;
		break;
	default:
		return NULL;
		break;
	}

}