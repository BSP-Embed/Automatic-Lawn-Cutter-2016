#ifndef MAIN_H
#define MAIN_H

#define F_CPU 7327800l

//INCLUDE HEADER FILE
#include "includes.h"

/******* DEFINE CONSTANT *******/
#define THRES_DIST			0.4f /* in meters */

/******** INTERRUPT PINS   ******/
#define INTDDR				DDRD
#define INTPORT				PORTD
#define INT0_PIN			PD2
/******  INTERRUPT PINS END  *****/

/******* DEFINE STRUCTURE   ******/
struct  {
	volatile int8u Meas:1;
	volatile int8u OnOff:1;
	volatile int8u MotStat:1;
}Flag;

#define		MoveVehi()		mot1on()
#define		StopVehi()		mot1off()

#define		CutOn()			RelayOn()
#define		CutOff()		RelayOff()

/**** DEFINE FUNCTION PROTOTYPE *****/
static void		init		(void);
static void		disptitle	(void);
static void		dispparam	(void);
static void		EXT0init	(void);


#endif

