#include "Cwrq.h"
#include "Graphic.h"
genericState * Wrq::onTimeOut(genericEvent * ev)
{
	//evento:timeout
	//accion:envio el paquete de datos de nuevo
	//
	printOnScreen("TIMEOUT", "N/A", "Envio DATA", true);
	return new Wrq;
}

genericState * Wrq::onError(genericEvent * ev)
{
	//evento:error
	//accion: finalizo la comunicacion
	//
	printOnScreen("ERROR", "N/A", "Finalizo la comunicacion", true);
	return new wait;
}

genericState * Wrq::onRack(genericEvent * ev)
{
	//evento: ack
	//accion:envio dato
	//
	printOnScreen("ACK", "N/A", "Envio DATA", true);
	return new Wrq;
}

genericState * Wrq::onLack(genericEvent * ev)
{
	//evento: lasta ack
	//accion: se finalizo la comunicacion
	//
	//
	printOnScreen("Last ACK", "N/A", "Finalizo la comunicacion", true);
	return new wait;
}
