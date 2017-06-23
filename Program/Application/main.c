
#include"main.h"

int main(void)
{
	float dist;
	init();
			
	while (TRUE) {
		MeasDist(0xc9, &dist);
		if ((dist < THRES_DIST)	 && Flag.MotStat)  {
			beep(1,50);
			TurnRight();
		}
		dlyms(100);
	}
	return 0;
}

static void init(void)
{
	buzinit();
	
	beep(2,150);
	relayinit();
	lcdinit();
	servoinit();
	motorinit();
	ultinit();
	EXT0init();
	disptitle();
	sei();
	
}
static void disptitle(void)
{
	lcdclr();
	lcdws("Auto Lawn Cutt'r");
	lcdr2();
	lcdws("VehiDist:    mts");
}


ISR(INT0_vect)
{
	if (Flag.OnOff == FALSE) {
		Flag.OnOff = TRUE;
		Flag.MotStat = TRUE;
		CutOn();
		MoveVehi();
	} else {
		Flag.MotStat = FALSE;
		Flag.OnOff = FALSE;
		CutOff();
		StopVehi();
	}
	GICR |= _BV(INT0);
} 

static void EXT0init(void)
{
	INTDDR 	&= ~_BV(INT0_PIN);
	INTPORT |= _BV(INT0_PIN);

	GICR |= _BV(INT0);			//ENABLE EXTERNAL INTERRUPT
	MCUCR |= _BV(ISC01);		//FALLING EDGE INTERRUPT

}
