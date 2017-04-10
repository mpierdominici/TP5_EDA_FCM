#pragma once
#include "genericEvent.h"
#include "genericState.h"
#include "genericFCM.h"
class Graphic
{
public:
	Graphic(bool serverOrClilent);
	/*Funcion Constructora, es necesario enviarle un ture o un false para indicar si el programa de simulacion es un Servidor o un Cliente
	se la utilizaria de la siguiente manera:
		{
			...
			Graphic g(true);//en este caso se indica que se va a simular un cliente TFTP
			...
		}
		 */
	void printOnScreen(char* actualEv, char* lastEv, char* executedAction);
	/*Funcion que recibe 3 punteros a char y imprime en pantalla el que es lo que esta haciendo el simulador actualmente*/
protected:
	bool isAClient;
	void clrScreen(void);	//Funcion hecha solamente para abstraesre mas del codigo y entenderlo mas facilmente
};