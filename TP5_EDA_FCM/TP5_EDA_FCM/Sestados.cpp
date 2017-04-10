#include "Sestados.h"

genericState * wait_t::onRWrq(genericEvent * ev)
{
	//evento: wrq
	//accion: envio Fack
	//

	return new wrq;
}

genericState * wait_t::onRRrq(genericEvent * ev)
{
	//evento:rrq
	//accion:envio fdata
	return new rrq;
}

genericState * wrq::onTimeOut(genericEvent * ev)
{
	//evento: time out
	//accion:reenvio ack
	//
	return new wrq;
}

genericState * wrq::onError(genericEvent * ev)
{
	//evento:error
	//accion:detengo la comunicacion
	//
	return new wait_t;
}

genericState * wrq::onRdata(genericEvent * ev)
{
	//evento:dato
	//accion:envio ack
	//levento:dato
	return new wrq;
}

genericState * wrq::onLdata(genericEvent * ev)
{
	//evento: ldata
	//aacion: se envia el lack
	//levento:data
	return new wait_t;
}

genericState * rrq::onTimeOut(genericEvent * ev)
{
	//evento: time out
	//accion: reenvio el ultimo ack enviado
	//
	return new rrq;
}

genericState * rrq::onError(genericEvent * ev)
{
	//evento:error
	//accion:detengo la comunicacion
	//
	return new wait_t;
}

genericState * rrq::onRack(genericEvent * ev)
{
	//evento: ack
	//accion: envio paquete de datos
	//
	return new rrq;
}

genericState * rrq::onLack(genericEvent * ev)
{
	//evento: lack
	//levento: ladata
	//accion: se termino la comunicacion
	return new wait_t;
}
