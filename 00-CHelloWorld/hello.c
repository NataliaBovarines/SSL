/*
TP N° 00 "Hello, World!"" en C
Programa cuya salida "Hello World" es capturada en un archivo
Alumna: Bovarines Natalia Gabriela
Ultima modificacion: 27/04/2022
*/

#include<stdio.h>

int main(void){

    FILE* output_file = freopen("output.txt", "w+",stdout);
    printf("Hello, world!");
    fclose(output_file); 

}