#include "CRrq.h"

genericState * Rrq::onError(genericEvent * ev)
{
	//evento:error
	//accion: finalizo la comunicacion
	//
	return new wait;
}

genericState * Rrq::onTimeOut(genericEvent * ev)
{
	//evento: timeout
	//levento:
	//accion:renvio el ultimo ack
	return new Rrq;
}

genericState * Rrq::onRdata(genericEvent * ev)
{
	//evento:data
	//levento:data
	//accion:envio ack
	return new Rrq;
}

genericState * Rrq::onLdata(genericEvent * ev)
{
	//evento:last data
	//accion:envio lack
	//
	//
	return new wait;
}
