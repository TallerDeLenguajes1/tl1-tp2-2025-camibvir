#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define M 5

struct{
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
   }typedef compu;

   
int main (){
    compu arregloCompu [M];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
        "Pentium"};
    for(int i = 0; i < M; i++){
        arregloCompu[i].anio = 2015 + rand()% 10;
        arregloCompu[i].cantidad_nucleos = 1 + rand()% 8;
        arregloCompu[i].velocidad = 1 + rand()% 3;
        arregloCompu[i].tipo_cpu = tipos[rand()%6];
        printf("%s", arregloCompu[i].tipo_cpu);
        printf("\n");
    }
}