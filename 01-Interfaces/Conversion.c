/* Conversion.c
* Implementaciones de las funciones Celsius y Farenheit
* Natalia Bovarines
* 29/05/2022
*/

#include "Conversion.h"

double Celsius(double f){
return (5.0/9.0)*(f-32);
}

double Farenheit(double f){
return (9.0/5.0)*f+32;
}