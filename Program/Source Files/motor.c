#include "motor.h"

void motorinit(void)
{
	MOT_DDR	|= _BV(MOT1_AN) | _BV(MOT1_CA) | _BV(MOT2_AN) | _BV(MOT2_CA);
	MOT_PORT	&= ~(_BV(MOT1_AN) | _BV(MOT1_CA) | _BV(MOT2_AN) | _BV(MOT2_CA));
}

void  Forward(void)
{
	MOT_PORT &= ~_BV(MOT1_AN);
	MOT_PORT |= _BV(MOT1_CA);
}

void Backward(void)
{
	MOT_PORT |= _BV(MOT1_AN);
	MOT_PORT &= ~_BV(MOT1_CA);
}

void Stop(void)
{
	MOT_PORT &= ~(_BV(MOT1_AN));
	MOT_PORT &= ~(_BV(MOT1_CA));
}