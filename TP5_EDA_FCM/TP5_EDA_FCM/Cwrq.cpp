#include "Cwrq.h"

genericState * Wrq::onTimeOut(genericEvent * ev)
{
	//evento:timeout
	//accion:envio el paquete de datos de nuevo
	//
	return new Wrq;
}

genericState * Wrq::onError(genericEvent * ev)
{
	//evento:error
	//accion: finalizo la comunicacion
	//
	return new wait;
}

genericState * Wrq::onRack(genericEvent * ev)
{
	//evento: ack
	//accion:envio dato
	//
	return new Wrq;
}

genericState * Wrq::onLack(genericEvent * ev)
{
	//evento: lasta ack
	//accion: se finalizo la comunicacion
	//
	//
	return new wait;
}
