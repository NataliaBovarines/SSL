/* hello6.c
* Fases de la traducción y errores
* Natalia Bovarines
* 05/06/2022
*/

int printf(const char * restrict s, ...);
int main(void){
int i=42;
printf("La respuesta es %u\n",i);
}