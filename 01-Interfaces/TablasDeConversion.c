/* TablasDeConversion.c
* Programa que imprime dos tablas de conversion Fahr=>Cel y Cel=>Fahr
* Natalia Bovarines
* 28/05/2022
*/

#include <stdio.h>
#include "Conversion.h"

int main(void){
const int LOWER = 0; // lower limit of table
const int UPPER = 300; // upper limit
const int STEP = 20; // step size

printf("Tabla de Farenheit a Celsius \n");
for(int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
printf("%3d %6.1f\n", fahr, Celsius(fahr) );
}

printf("Tabla de Celsius a Farenheit\n");
for (int cels = LOWER; cels <= UPPER; cels = cels + STEP){
printf("%3d %6.1f\n", cels, Farenheit(cels) );
}
}