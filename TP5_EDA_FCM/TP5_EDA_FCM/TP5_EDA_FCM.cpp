// TP5_EDA_FCM.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "eventGenerator.h"
#include "cliente.h"
#include "genericEvent.h"
int main()
{
	bool quit = false;
	genericEvent * ev;
	cliente c;
	
	
	while (!quit)
	{
		ev= eventGenerator();
		if (ev != NULL)
		{
			c.dispatch(ev);

		}
		else
		{
			quit = true;
		}
	}
    return 0;
}

