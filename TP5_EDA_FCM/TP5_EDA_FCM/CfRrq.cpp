#include "CfRrq.h"

genericState * fRrq::onError(genericEvent * ev)
{
	//evento:error
	//levento:error
	//accion:finalizo la coumnicacion
	return new wait;
}

genericState * fRrq::onTimeOut(genericEvent * ev)
{
	//evnto:timeotu
	//levento:falta de data
	//accion envio el ack anterior
	return new fRrq;
}

genericState * fRrq::onRdata(genericEvent * ev)
{
	//evento:data
	//levento:data
	//accion: envio ack
	return new Rrq;
}
