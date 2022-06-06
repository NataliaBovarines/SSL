- **Legajo**: 176.514-0
- **Apellido**: Bovarines
- **Nombres**: Natalia Gabriela
- **Trabajo N°02** : "Fases de la Traducción y Errores" 



## 7.3.1. Secuencia de Pasos

### 1) Preprocesador
    Comando para preprocesar  
    -E                       Preprocess only; do not compile, assemble or link.

    a) Falta una llave, prontf, int i no se utiliza
    b) gcc -E hello2.c -o hello2.i
        Conclusiones:

        - Reemplaza la linea 1 por el contenido de la biblioteca stdio.h (declaracion de las funciones standard). 
        - Remueve el comentario de la linea dos y lo reemplaza por un espacio
    d) En la primer linea se declara una funcion printf que retorna un int y que espera como minimo un solo argumento. El primer argumento es un puntero a un caracter que no se va a poder modificar y que solo es apuntado por s

    e) $ gcc -E hello3.c -o hello3.i
     Diferencias entre hello3.c y hello3.1 :
        en hello3.i se muestran errores y en que archivo fueron detectados

### 2) Compilacion
    a) $ gcc -S hello3.c -o hello3.s

    Warnings y errores:

    hello3.c: In function 'main':
    hello3.c:4:1: warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]
    4 | prontf("La respuesta es %d\n");
      | ^~~~~~
      | printf
    hello3.c:4:1: error: expected declaration or statement at end of input

    b) Se detectan un warning y un error sintactico (dado por la ausencia de la llave de cierre de la funcion main)
    $ gcc -S hello4.c -o hello4.s                                                                           
    hello4.c: In function 'main':
    hello4.c:4:1: warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]
    4 | prontf("La respuesta es %d\n");
      | ^~~~~~
      | printf
   
   Conclusiones:
   se genera hello4.s sin problemas lo cual significa que el programa es correcto a nivel lexico, sintactico y semantico

    c) De la linea 5 a la linea 10 se definen metacomandos que facilitan la codificacion posterior.
    Se tiene una pila donde se realiza movimientos donde el stack pointer pasa a ser el base pointer para dar lugar a las proximas invocaciones y variables.


    d)$ gcc -c hello4.s -o hello4.o

        $ od -t x1 hello4.o
        0000000 4c 01 06 00 00 00 00 00 c8 01 00 00 12 00 00 00
        0000020 00 00 04 01 2e 74 65 78 74 00 00 00 00 00 00 00
        0000040 00 00 00 00 2c 00 00 00 04 01 00 00 a0 01 00 00
        0000060 00 00 00 00 03 00 00 00 20 00 30 60 2e 64 61 74
        0000100 61 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
        0000120 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
        0000140 40 00 30 c0 2e 62 73 73 00 00 00 00 00 00 00 00
        0000160 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
        0000200 00 00 00 00 00 00 00 00 80 00 30 c0 2e 72 64 61
        0000220 74 61 00 00 00 00 00 00 00 00 00 00 14 00 00 00
        0000240 30 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00
        0000260 40 00 30 40 2f 34 00 00 00 00 00 00 00 00 00 00
        0000300 00 00 00 00 24 00 00 00 44 01 00 00 00 00 00 00
        0000320 00 00 00 00 00 00 00 00 40 00 30 40 2f 31 35 00
        0000340 00 00 00 00 00 00 00 00 00 00 00 00 38 00 00 00
        0000360 68 01 00 00 be 01 00 00 00 00 00 00 01 00 00 00
        0000400 40 00 30 40 55 89 e5 83 e4 f0 83 ec 20 e8 00 00
        0000420 00 00 c7 44 24 1c 2a 00 00 00 c7 04 24 00 00 00
        0000440 00 e8 00 00 00 00 b8 00 00 00 00 c9 c3 90 90 90
        0000460 4c 61 20 72 65 73 70 75 65 73 74 61 20 65 73 20
        0000500 25 64 0a 00 47 43 43 3a 20 28 4d 69 6e 47 57 2e
        0000520 6f 72 67 20 47 43 43 20 42 75 69 6c 64 2d 32 29
        0000540 20 39 2e 32 2e 30 00 00 14 00 00 00 00 00 00 00
        0000560 01 7a 52 00 01 7c 08 01 1b 0c 04 04 88 01 00 00
        0000600 1c 00 00 00 1c 00 00 00 04 00 00 00 29 00 00 00
        0000620 00 41 0e 08 85 02 42 0d 05 65 c5 0c 04 04 00 00
        0000640 0a 00 00 00 10 00 00 00 14 00 19 00 00 00 0a 00
        0000660 00 00 06 00 1e 00 00 00 11 00 00 00 14 00 20 00
        0000700 00 00 04 00 00 00 14 00 2e 66 69 6c 65 00 00 00
        0000720 00 00 00 00 fe ff 00 00 67 01 68 65 6c 6c 6f 34
        0000740 2e 63 00 00 00 00 00 00 00 00 00 00 5f 6d 61 69
        0000760 6e 00 00 00 00 00 00 00 01 00 20 00 02 01 00 00
        0001000 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
        0001020 2e 74 65 78 74 00 00 00 00 00 00 00 01 00 00 00
        0001040 03 01 29 00 00 00 03 00 00 00 00 00 00 00 00 00
        0001060 00 00 00 00 2e 64 61 74 61 00 00 00 00 00 00 00
        0001100 02 00 00 00 03 01 00 00 00 00 00 00 00 00 00 00
        0001120 00 00 00 00 00 00 00 00 2e 62 73 73 00 00 00 00
        0001140 00 00 00 00 03 00 00 00 03 01 00 00 00 00 00 00
        0001160 00 00 00 00 00 00 00 00 00 00 00 00 2e 72 64 61
        0001200 74 61 00 00 00 00 00 00 04 00 00 00 03 01 14 00
        0001220 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
        0001240 00 00 00 00 19 00 00 00 00 00 00 00 05 00 00 00
        0001260 03 01 23 00 00 00 00 00 00 00 00 00 00 00 00 00
        0001300 00 00 00 00 00 00 00 00 24 00 00 00 00 00 00 00
        0001320 06 00 00 00 03 01 38 00 00 00 01 00 00 00 00 00
        0001340 00 00 00 00 00 00 00 00 5f 5f 5f 6d 61 69 6e 00
        0001360 00 00 00 00 00 00 20 00 02 00 5f 70 72 6f 6e 74
        0001400 66 00 00 00 00 00 00 00 20 00 02 00 2e 00 00 00
        0001420 2e 72 64 61 74 61 24 7a 7a 7a 00 2e 65 68 5f 66
        0001440 72 61 6d 65 00 2e 72 64 61 74 61 24 7a 7a 7a 00
        0001460 2e 65 68 5f 66 72 61 6d 65 00
        0001472

        Son los bytes del archivo objeto representados en hexadecimal

### 3) Vinculacion 
    a) $ gcc hello4.o -o hello4.exe
    c:/mingw/bin/../lib/gcc/mingw32/9.2.0/../../../../mingw32/bin/ld.exe: hello4.o:hello4.c:(.text+0x1e): undefined reference to `prontf'
    collect2.exe: error: ld returned 1 exit status

    Conclusion: 
    Se detecta un error de vinculacion, prontf no esta definido. ld (linker) retornó 1
    
    b) gcc hello5.c -o hello5.exe

    c) $ ./hello5
        La respuesta es 4200880

### 4) Correccion de Bug
    a) gcc hello6.c -o hello6.exe
        $ ./hello6
        La respuesta es 42

### 5) Remocion del prototipo
    a)$ gcc hello7.c -o hello7.exe
    hello7.c: In function 'main':
    hello7.c:3:1: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
    3 | printf("La respuesta es %d\n", i);
      | ^~~~~~
    hello7.c:3:1: warning: incompatible implicit declaration of built-in function 'printf'
    hello7.c:1:1: note: include '<stdio.h>' or provide a declaration of 'printf'
    +++ |+#include <stdio.h>
    1 | int main(void){

### 6) Compilacion separada

    b) 
    $ gcc hello8.c -o hello8.exe
    hello8.c: In function 'main':
    hello8.c:3:1: warning: implicit declaration of function 'prontf' [-Wimplicit-function-declaration]
    3 | prontf("La respuesta es %d\n", i);
      | ^~~~~~
    c:/mingw/bin/../lib/gcc/mingw32/9.2.0/../../../../mingw32/bin/ld.exe: C:\Users\lenovo\AppData\Local\Temp\ccZiJkh4.o:hello8.c:(.text+0x26): undefined reference to `prontf'
    collect2.exe: error: ld returned 1 exit status
    
    ------------------
    
    $ gcc hello8.c studio1.c -o hello8.exe
    hello8.c: In function 'main':
    hello8.c:3:1: warning: implicit declaration of function 'prontf' [-Wimplicit-function-declaration]
    3 | prontf("La respuesta es %d\n", i);
      | ^~~~~~
    studio1.c: In function 'prontf':
    studio1.c:2:1: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
    2 | printf("La respuesta es %d\n", i);
      | ^~~~~~
    studio1.c:2:1: warning: incompatible implicit declaration of built-in function 'printf'
    studio1.c:1:1: note: include '<stdio.h>' or provide a declaration of 'printf'
    +++ |+#include <stdio.h>
    1 | void prontf(const char* s, int i){
    
    d)
    iv) $ gcc hello9.c studio2.c -o hello9.exe
    (Sin errores ni warnings)
    $ ./hello9
    La respuesta es 42


### CREDITO EXTRA
Bibliotecas
- ¿Qué son?

    Son conjuntos de funciones que proveen los lenguajes de programacion, a traves de las cuales se resuelven tareas estándar que generalmente son requeridas en la mayoría de los programas. Por ejemplo, las funciones printf y scanf que permiten mostrar y leer datos por consola y forman parte de la biblioteca estandar de entrada/salida de C, tambien conocida como stdio.h
