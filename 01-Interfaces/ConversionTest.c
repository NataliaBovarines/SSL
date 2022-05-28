/* ConversionTest.c
* Test de conversiones
* Natalia Bovarines
* 28/05/2022
*/

#include<assert.h>
#include<stdbool.h>
#include<math.h>
#include "Conversion.h"

bool casi_iguales(double , double );

int main(){

    assert(casi_iguales(Farenheit(0),32.0));
    assert(casi_iguales(Celsius(60.0),15.5));

}


bool casi_iguales(double izquierda, double derecha)
{
    const double DBL_EPSILON =  0.1;

     return fabs(izquierda - derecha) <= DBL_EPSILON;
}
