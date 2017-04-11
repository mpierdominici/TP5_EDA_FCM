#include "Graphic.h"
#include <iostream>
using namespace std;
void clrScreen(void)
{
	for (int i = 0; i < 50; i++)
	{
		cout << endl;
	}
	return;
}

void printOnScreen(char* actualEv, char* lastEv, char* executedAction, bool isAClient)
{
	clrScreen();

	if (isAClient == true)
	{
		cout << "Programa de simulacion de cliente TFTP implementado con FSM" << endl << endl;
		cout << "Cunado el usuario presione las teclas de Eventos, entiende que se gene´ró un nuevo evento" << endl;
		cout << "y responde ante ese evento realizando una accion y cambiando el estado." << endl << endl;
		cout << "Eventos			|			Status de la FSM			" << endl << endl;
		cout << "A = RWRQ		|  Evento Recibido: " << actualEv << endl << endl;
		cout << "S = rRRQ		|  Ultimo Evento recibido: " << lastEv << endl << endl;
		cout << "D = TIMEOUT		|  Accion Ejecutada: " << executedAction << endl << endl;
		cout << "F = ERROR		|" << endl << endl;
		cout << "G = ACK			|" << endl << endl;
		cout << "H = DATA		|" << endl << endl;
		cout << "J = lACK		|" << endl << endl;
		cout << "K = lDATA		|" << endl << endl;
		cout << "L = fACK		|" << endl << endl;
		cout << "Z = fDATA		|" << endl << endl;
	}
	else
	{
		cout << "Programa de simulacion de Servidor TFTP implementado con FSM" << endl << endl;
		cout << "Cunado el usuario presione las teclas de Eventos, entiende que se gene´ró un nuevo evento" << endl;
		cout << "y responde ante ese evento realizando una accion y cambiando el estado." << endl << endl;
		cout << "Eventos			|			Status de la FSM			" << endl << endl;
		cout << "A = RWRQ		|  Evento Recibido: " << actualEv << endl << endl;
		cout << "S = rRRQ		|  Ultimo Evento recibido: " << lastEv << endl << endl;
		cout << "D = TIMEOUT		|  Accion Ejecutada: " << executedAction << endl << endl;
		cout << "F = ERROR		|" << endl << endl;
		cout << "G = ACK			|" << endl << endl;
		cout << "H = DATA		|" << endl << endl;
		cout << "J = lACK		|" << endl << endl;
		cout << "K = lDATA		|" << endl << endl;
		cout << "L = fACK		|" << endl << endl;
		cout << "Z = fDATA		|" << endl << endl;
	}
	return;
}