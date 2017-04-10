// TP5_EDA_FCM.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "eventGenerator.h"
#include "cliente.h"
#include "servidor.h"
#include "genericEvent.h"
int main()
{
	bool quit = false;
	bool clientState = false;
	genericEvent * ev;
	server s;
	cliente c;
	
	
	while (!quit)
	{
		ev= eventGenerator();
		if (ev != NULL)
		{
			if (clientState)
			{
				c.dispatch(ev);
			}
			else
			{
				s.dispatch(ev);
			}
			

		}
		else
		{
			quit = true;
		}
	}
    return 0;
}

