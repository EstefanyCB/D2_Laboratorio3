//*********************************************
//Universidad del Valle de Guatemala
//BE3015: Electronica Digital 2
//Estefany Eleuteria Batz Cantor
//Laboratorio #3
//Prueba1Parte1

//*********************************************
//Librerias
//*********************************************
#include <Arduino.h>

//*********************************************
//Definición de pines
//*********************************************
//Pines de entrada
  //Servo
#define BS1Derecha 23
#define BS2Izquierda 1

  //Leds
#define BL3Color 15
#define BL4Intensidad 4

//Pines de salida
#define LedRojo 27
#define LedVerde 25
#define LedAzul 32

#define Servo 13

//PASO 1: Seleccionar los parametros de la senal PWM
#define PWMServo 5
#define frequPWMServo 50
#define resolution 8

#define pinPWMServo 12

//*********************************************
//Prototipo de funciones
//*********************************************
void ConfiguracionServoPWM(void);

//*********************************************
//Variables Globales
//*********************************************

//*********************************************
//ISR interrupciones
//*********************************************
void IRAM_ATTR ISR(){

}

//*********************************************
//Configuracion
//*********************************************
void setup() {
  ConfiguracionServoPWM();
}



void loop() {
  // put your main code here, to run repeatedly:
}