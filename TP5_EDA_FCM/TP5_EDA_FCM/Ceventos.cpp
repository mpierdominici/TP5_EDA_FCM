#include "Ceventos.h"

timeOUT::timeOUT()
{
	ev.ev = TIME_OUT;
}

error::error()
{
	ev.ev = ERROR;
}

rAck::rAck()
{
	ev.ev = R_ACK;
}

rData::rData()
{
	ev.ev =R_DATA;
}

rWrq::rWrq()
{
	ev.ev = R_WRQ;
}

rRrq::rRrq()
{
	ev.ev = R_RRQ;
}

fAck::fAck()
{
	ev.ev = F_ACK;
}

lAck::lAck()
{
	ev.ev = L_ACK;
}

fData::fData()
{
	ev.ev = F_DATA;
}

lData::lData()
{
	ev.ev = L_DATA;
}
