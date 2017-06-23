#ifndef _APP_H
#define _APP_H

/* Main settings */

/*comment below line for release*/
//#define TESTING
#define EEPROM_DISPLAY				0

/******** MAIN CONFIGURATION ENDS ****************/

/* LCD CONFIGURATION */
#define LCD_DDR           	   		DDRB 
#define LCD_DATA_PORT          		PORTB
#define LCD_ENABLE_PIN        		PB3 
#define LCD_REGISTER_SELECT_PIN     PB2
#define DISPLAY_INIT				1
#define LCD_NSCRL					1
#define FLOAT_T0_STRING				1
#define DECIMAL_PRECISION			100

/******** LCD CONFIGURATION ENDS ****************/

/* BUZZER: CONFIGURATION */
#define	BUZ_DDR						DDRC
#define	BUZ_PORT					PORTC
#define	BUZ_PIN						PC1
#define OFF_TIME					100
/******** BUZZER CONFIGURATION ENDS ****************/

/* LED: CONFIGURATION */

#define	LED_DDR			DDRC
#define	LED_PORT		PORTC
#define	LED_PIN			PC0

#define OFF_TIME		100
/******** LED CONFIGURATION ENDS ****************/

/* GSM: CONFIGURATION */

#define MSG_START					""
#define MSG_END						""

/******** GSM CONFIGURATION ENDS ****************/

/******* ULTRASONIC SENSOR CONFIGURATION ********/
#define	ULTSEN_DDR			DDRB
#define	ULTSEN_PORT			PORTB
#define	ULTSEN_PIN			PINB
#define ECHO_PIN			PB1
#define TRIG_PIN			PB0
/****** ULTRASONIC CONFIGURATION ENDS **********/


/******** MOTOR CONFIGURATION   ****************/
#define MOT_PORT			PORTC
#define MOT_DDR				DDRC
#define MOT1_AN				PC2
#define MOT1_CA				PC3
#define MOT2_AN				PC6
#define MOT2_CA				PC7
/******** MOTOR CONFIGURATION ENDS  ****************/

/******* SERVO CONFIGURATION ********************/
#define SERVO_DDR			DDRD
#define SERVO_PORT			PORTD
#define SERVO1				PD5
/******** SERVO CONFIGURATION ENDS **************/

/********* RELAY CONFIGURATION ******************/
#define RELAY_PORT			PORTC
#define RELAY_DDR			DDRC
#define RELAY				PC7
/********* RELAY CONFIGURATION ENDS ************/

#endif
