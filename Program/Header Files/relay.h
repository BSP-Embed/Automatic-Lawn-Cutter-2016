#ifndef RELAY_H
#define RELAY_H

#include "includes.h"

#define relayinit()		do {							\
							RELAY_DDR |= _BV(RELAY);	\
							RELAY_PORT &= ~_BV(RELAY);	\
						} while(0)
						

#define RelayOn()		RELAY_PORT |= _BV(RELAY)
#define RelayOff()		RELAY_PORT &= ~_BV(RELAY)


#endif