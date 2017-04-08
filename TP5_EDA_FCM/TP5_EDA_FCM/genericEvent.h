#pragma once
#include <stdint.h>

typedef struct {
	int16_t ev;
}eventType;

class genericEvent
{
public:
	eventType type();

protected:
	eventType ev;
};



