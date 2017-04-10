#include "Graphic.h"
#include <cstdio>
#include <iostrem>

using namespace std;
Graphic::Graphic(bool serverOrClient)
{
	switch (serverOrClient)
	{
		case true:
			isAClient=true;
			break;
		case false:
			isAClient=false;
			break;
	}
	printBase();
	actualEv = NULL;
	lastEv = NULL;
}

void Graphic::printEv(genericEvent * myEvent)
{
	....
}

void Graphic::printExecutedAction(void)
{
	...
}

void Graphic::printBase(void)
{
	cout << string(50, '\n');
	if (isAClient == true)
	{
		cout << "Programa de simulacion de cliente TFTP implementado con FSM"<<endl<<endl;
		cout << "Cunado el usuario presione las teclas de Eventos, entiende que se gene´ró un nuevo evento"<<endl;
		cout << "y responde ante ese evento realizando una accion y cambiando el estado."<<endl<<endl;
		cout << "Eventos		|			Status de la FSM			"<< endl << endl;
		cout << "A = WRQ		|  Evento Recibido: "<< actualEv<<endl<<endl;
		cout << "B = RRQ		|  Ultimo Evento recibido: "<< lastEv<<endl<<endl;
		cout << "C = TIMEOUT	|  Accion Ejecutada: "<< DATO RECIBIDO COMO PARAMETRO<< endl<<endl;
		cout << ...	

	}
	else
	{
		cout << "Programa de simulacion de Servidor TFTP implementado con FSM" << endl << endl;
		cout << "Cunado el usuario presione las teclas de Eventos, entiende que se gene´ró un nuevo evento" << endl;
		cout << "y responde ante ese evento realizando una accion y cambiando el estado." << endl << endl;
		cout << "Eventos		|			Status de la FSM			" << endl << endl;
		cout << "A = WRQ		|  Evento Recibido: " << actualEv << endl << endl;
		cout << "B = RRQ		|  Ultimo Evento recibido: " << lastEv << endl << endl;
		cout << "C = TIMEOUT	|  Accion Ejecutada: " << DATO RECIBIDO COMO PARAMETRO << endl << endl;
		cout << ...
	}
}

void Graphic::printLastEv(void)
{
	...
}

