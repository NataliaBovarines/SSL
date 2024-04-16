/*
TP N° 0 "Hello, World!"" en C
Programa cuya salida "Hello World" es capturada en un archivo output.txt
Alumna: Bovarines Natalia Gabriela
*/

#include<stdio.h>

int main(void){
    FILE* output_file = freopen("output.txt", "w+",stdout);
    printf("Hello, world!");
    fclose(output_file); 
}