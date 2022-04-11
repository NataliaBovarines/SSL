#include<stdio.h>

int main(void){

    FILE* output_file = fopen("output.txt", "w+");
    fprintf(output_file,"Hello, world!");
    fclose(output_file); 

}