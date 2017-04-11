#include "Cwait.h"
#include "Graphic.h"
genericState * wait::onFack(genericEvent * ev)
{
	//im primo en pantalla
	//evento recivido: first_ack
	//accion ejecutada envio data
	printOnScreen("First ACK", "N/A", "Envio DATA", true);
	return (new fWrq);
}

genericState * wait::onFdata(genericEvent * ev)
{
	//evenyo recivido: first data
	//accion: envio data
	printOnScreen("First data", "N/A", "Envio Data", true);
	return (new fRrq);
}
