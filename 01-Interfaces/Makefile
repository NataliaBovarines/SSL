# Makes TablasDeConversion.exe y ConversionTest.exe
# Natalia Bovarines
# 28/05/2022

all: TablasDeConversion ConversionTest
CFLAGS = -std=c18 -Wall 

TablasDeConversion:  TablasDeConversion.o Conversion.o 
	gcc TablasDeConversion.o Conversion.o -o TablasDeConversion  $(CFLAGS)
	./TablasDeConversion

ConversionTest: ConversionTest.o Conversion.o
	gcc ConversionTest.o Conversion.o -o ConversionTest $(CFLAGS) 
	./ConversionTest

TablasDeConversion.o: TablasDeConversion.c Conversion.h 
	gcc -c TablasDeConversion.c -o TablasDeConversion.o $(CFLAGS) 

Conversion.o: Conversion.c Conversion.h
	gcc -c Conversion.c -o Conversion.o $(CFLAGS)

ConversionTest.o: ConversionTest.c Conversion.h
	gcc -c ConversionTest.c -o ConversionTest.o $(CFLAGS) 

.PHONY : clean
clean:
	rm -f *.o ConversionTest.exe TablasDeConversion.exe
	