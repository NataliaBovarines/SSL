/* ConversionTest.c
* Test de conversiones
* Natalia Bovarines
* 29/05/2022
*/

#include<assert.h>
#include<stdbool.h>
#include<math.h>
#include "Conversion.h"

bool casi_iguales(double , double);

int main(){
    
    //0°C es casi igual a 32° F
    assert(casi_iguales(Farenheit(0),32.0));

    //60°F es casi igual a 15.5°C
    assert(casi_iguales(Celsius(60.0),15.5));

    //20°F no es casi igual a -8° C
    assert(!casi_iguales(Celsius(20),-8));

}


bool casi_iguales(double izquierda, double derecha)
{
    double epsilon =  0.1;

    return fabs(izquierda - derecha) <= epsilon;
}
