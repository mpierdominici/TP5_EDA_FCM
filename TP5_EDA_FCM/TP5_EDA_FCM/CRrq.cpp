#include "CRrq.h"
#include "Graphic.h"
genericState * Rrq::onError(genericEvent * ev)
{
	//evento:error
	//accion: finalizo la comunicacion
	//
	printOnScreen("ERROR", "N/A", "Finalizo la comunicacion", true);
	return new wait;
}

genericState * Rrq::onTimeOut(genericEvent * ev)
{
	//evento: timeout
	//levento:
	//accion:renvio el ultimo ack
	printOnScreen("TIMEOUT", "N/A", "Reenvio ACK", true);
	return new Rrq;
}

genericState * Rrq::onRdata(genericEvent * ev)
{
	//evento:data
	//levento:data
	//accion:envio ack
	printOnScreen("DATA", "DATA", "Envio ACK", true);
	return new Rrq;
}

genericState * Rrq::onLdata(genericEvent * ev)
{

	//evento:last data
	//accion:envio lack
	//
	//
	printOnScreen("Last Data", "N/A", "Envio Last ACK", true);
	return new wait;
}
