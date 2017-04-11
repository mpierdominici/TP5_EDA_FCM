#include "CfWrq.h"
#include "Graphic.h"
genericState * fWrq::onTimeOut(genericEvent * ev)
{
	//evento:timeout
	//accion: renvio el wrq
	printOnScreen("TIMEOUT", "N/A","Reenvio el WRQ", true);
	return (new fWrq);
}

genericState * fWrq::onError(genericEvent * ev)
{
	//evento: error
	//accion:finalizo la comunicacion
	//
	printOnScreen("ERROR", "N/A", "Finalizo la comunicacion", true);
	return new wait ;
}

genericState * fWrq::onRack(genericEvent * ev)
{
	//evento:ack
	//accion:envio dato
	//
	//
	printOnScreen("ACK", "N/A", "Envio DATA", true);
	return new Wrq;
}

