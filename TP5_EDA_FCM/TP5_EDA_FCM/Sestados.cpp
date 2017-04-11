#include "Sestados.h"
#include "Graphic.h"

genericState * wait_t::onRWrq(genericEvent * ev)
{
	//evento: wrq
	//accion: envio Fack
	//
	printOnScreen("WRQ","N/A","Envio First ACK",false);

	return new wrq;
}

genericState * wait_t::onRRrq(genericEvent * ev)
{
	//evento:rrq
	//accion:envio fdata
	printOnScreen("RRQ", "N/A", "Envio First DATA", false);
	return new rrq;
}

genericState * wrq::onTimeOut(genericEvent * ev)
{
	//evento: time out
	//accion:reenvio ack
	//
	printOnScreen("TIMEOUT", "N/A", "Envio ACK", false);
	return new wrq;
}

genericState * wrq::onError(genericEvent * ev)
{
	//evento:error
	//accion:detengo la comunicacion
	//
	printOnScreen("ERROR", "N/A", "Detengo Comunicacion", false);
	return new wait_t;
}

genericState * wrq::onRdata(genericEvent * ev)
{
	//evento:dato
	//accion:envio ack
	//levento:dato
	printOnScreen("DATO", "ACK", "Envio ACK", false);
	return new wrq;
}

genericState * wrq::onLdata(genericEvent * ev)
{
	//evento: ldata
	//aacion: se envia el lack
	//levento:data
	printOnScreen("LDATA", "DATA", "Envio last ACK", false);
	return new wait_t;
}

genericState * rrq::onTimeOut(genericEvent * ev)
{
	//evento: time out
	//accion: reenvio el ultimo ack enviado
	//
	printOnScreen("TIMEOUT", "N/A", "ReEnvio ACK", false);
	return new rrq;
}

genericState * rrq::onError(genericEvent * ev)
{
	//evento:error
	//accion:detengo la comunicacion
	//
	printOnScreen("ERROR", "N/A", "DETENGO LA COMUNICACION", false);
	return new wait_t;
}

genericState * rrq::onRack(genericEvent * ev)
{
	//evento: ack
	//accion: envio paquete de datos
	//
	printOnScreen("ACK", "N/A", "Envio DATA", false);
	return new rrq;
}

genericState * rrq::onLack(genericEvent * ev)
{
	//evento: lack
	//levento: ladata
	//accion: se termino la comunicacion
	printOnScreen("LACK", "LDATA", "Se termino la comunicacion", false);
	return new wait_t;
}
