#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define M 5

typedef struct {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador
} compu;

void listarPCs(compu arregloCompu[], int cantidad);
void mostrarMasVieja(compu arregloCompu[], int cantidad);
void mostrarMasVeloz (compu arregloCompu[], int cantidad);

int main (){
    compu arregloCompu[M];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for(int i = 0; i < M; i++){
        arregloCompu[i].anio = 2015 + rand() % 10;
        arregloCompu[i].cantidad_nucleos = 1 + rand() % 8;
        arregloCompu[i].velocidad = 1 + rand() % 3;
        arregloCompu[i].tipo_cpu = tipos[rand() % 6];
    }

    listarPCs(arregloCompu, M);
    mostrarMasVieja(arregloCompu, M);
    //mostrarMasVeloz(arregloCompu, M);

    return 0;
}

void listarPCs(compu arregloCompu[], int cantidad){
    for (int i = 0; i < cantidad; i++){
        printf("Computadora %d\n", i+1);
        printf(" Velocidad: %d GHz\n", arregloCompu[i].velocidad);
        printf(" Año: %d\n", arregloCompu[i].anio);
        printf(" Núcleos: %d\n", arregloCompu[i].cantidad_nucleos);
        printf(" Tipo CPU: %s\n", arregloCompu[i].tipo_cpu);
    }
}

void mostrarMasVieja(compu arregloCompu[], int cantidad){
    int menor = arregloCompu[0].anio, indice = 0, i;
    for(i=0; i < cantidad; i ++){
        if(arregloCompu[i].anio < menor){
            menor = arregloCompu[i].anio;
            indice = i;
        }
    }
    printf("Computadora más vieja es la computadora número %d:\n", indice+1);
    printf("Sus características son: \n");
    printf(" Velocidad: %d GHz\n", arregloCompu[indice].velocidad);
    printf(" Año: %d\n", arregloCompu[indice].anio);
    printf(" Núcleos: %d\n", arregloCompu[indice].cantidad_nucleos);
    printf(" Tipo CPU: %s\n", arregloCompu[indice].tipo_cpu);
}

void mostrarMasVeloz(compu arregloCompu [], int cantidad){
    int i, mayor = arregloCompu[0].velocidad, indice= 0;
    for(i=0; i < cantidad; i++){
        if(arregloCompu[i].velocidad > mayor){
            mayor = arregloCompu[i].velocidad;
            indice = i;
        }
    }
    printf("Computadora más veloz es la computadora número %d:\n", indice+1);
    printf("Sus características son: \n");
    printf(" Velocidad: %d GHz\n", arregloCompu[indice].velocidad);
    printf(" Año: %d\n", arregloCompu[indice].anio);
    printf(" Núcleos: %d\n", arregloCompu[indice].cantidad_nucleos);
    printf(" Tipo CPU: %s\n", arregloCompu[indice].tipo_cpu);
}
    
