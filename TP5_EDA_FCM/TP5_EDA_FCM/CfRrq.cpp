#include "CfRrq.h"
#include "Graphic.h"
genericState * fRrq::onError(genericEvent * ev)
{
	//evento:error
	//levento:error
	//accion:finalizo la coumnicacion
	printOnScreen("ERROR", "N/A", "Finalizo la comunicacion", true);
	return new wait;
}

genericState * fRrq::onTimeOut(genericEvent * ev)
{
	//evnto:timeotu
	//levento:falta de data
	//accion envio el ack anterior
	printOnScreen("TIMEOTU", "Falta Data", "Envio First ACK", true);
	return new fRrq;
}

genericState * fRrq::onRdata(genericEvent * ev)
{
	//evento:data
	//levento:data
	//accion: envio ack
	printOnScreen("DATA", "DATA", "Envio ACK", true);
	return new Rrq;
}
