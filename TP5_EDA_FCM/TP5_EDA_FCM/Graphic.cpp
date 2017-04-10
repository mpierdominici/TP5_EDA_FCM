#include "Graphic.h"
#include <cstdio>
#include <iostrem>

using namespace std;
Graphic::Graphic(bool serverOrClient)
{
	isAClient=serverOrClient;
	return;
}

void Graphic::printOnScreen(char* actualEv, char* lastEv, char* executedAction)
{
	clrScreen();
	if (isAClient == true)
	{
		cout << "Programa de simulacion de cliente TFTP implementado con FSM" << endl << endl;
		cout << "Cunado el usuario presione las teclas de Eventos, entiende que se gene´ró un nuevo evento" << endl;
		cout << "y responde ante ese evento realizando una accion y cambiando el estado." << endl << endl;
		cout << "Eventos		|			Status de la FSM			" << endl << endl;
		cout << "Q = TIMEOUT	|  Evento Recibido: " << *actualEv << endl << endl;
		cout << "W = DATA		|  Ultimo Evento recibido: " << *lastEv << endl << endl;
		cout << "E = ACK		|  Accion Ejecutada: " << *executedAction << endl << endl;
		cout << "R = ERROR		|" << endl << endl;
	}
	else
	{
		cout << "Programa de simulacion de Servidor TFTP implementado con FSM" << endl << endl;
		cout << "Cunado el usuario presione las teclas de Eventos, entiende que se gene´ró un nuevo evento" << endl;
		cout << "y responde ante ese evento realizando una accion y cambiando el estado." << endl << endl;
		cout << "Eventos		|			Status de la FSM			" << endl << endl;
		cout << "Q = WRQ		|  Evento Recibido: " << *actualEv << endl << endl;
		cout << "W = RRQ		|  Ultimo Evento recibido: " << *lastEv << endl << endl;
		cout << "E = TIMEOUT	|  Accion Ejecutada: " << *executedAction << endl << endl;
		cout << "R = DATA		|" << endl << endl;
		cout << "T = ACK		|" << endl << endl;
		cout << "Y = ERROR		|" << endl << endl;
		cout << "U = DATA		|" << endl << endl;
	}
	return;
}

void Graphic::clrScreen(void)
{
	cout << string(50, '\n');
	return;
}