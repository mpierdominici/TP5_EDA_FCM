#include "Cwait.h"

genericState * wait::onFack(genericEvent * ev)
{
	//im primo en pantalla
	//evento recivido: first_ack
	//accion ejecutada envio data
	return (new fWrq);
}

genericState * wait::onFdata(genericEvent * ev)
{
	//evenyo recivido: first data
	//accion: envio data
	return (new fRrq);
}
