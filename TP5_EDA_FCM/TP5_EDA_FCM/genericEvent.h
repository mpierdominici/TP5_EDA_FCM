#pragma once
#include <cstdint>

enum {TIME_OUT,ERROR,R_ACK,R_DATA,R_WRQ,R_RRQ};

typedef struct {
	int ev;
}eventType;

class genericEvent
{
public:
	eventType type();

protected:
	eventType ev;
};



