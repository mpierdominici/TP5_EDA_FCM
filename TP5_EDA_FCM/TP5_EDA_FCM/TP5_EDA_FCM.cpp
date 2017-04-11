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
	bool clientState = true;
	genericEvent * ev;
	server s;
	cliente c;
	char caracter;
	printf("Presione 1 + ENTER  para simular Cliente \n");
	printf("Presione 2 + ENTER  para simular Servidor \n");
	printf("Cualquier otra tecla + ENTER  para simular Cliente \n");
	caracter = getchar();
	if (caracter != '\n')
	{
		while (getchar() != '\n')
		{

		}
	}

	if (caracter == '2')
	{
		clientState = false;
	}
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

