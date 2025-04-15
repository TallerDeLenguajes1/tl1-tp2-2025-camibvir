#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define N 20

int main(){
    // codigo a completar
    int i;
    double vt[N];
    for(i = 0;i<N; i++)
    {
    vt[i]=1+rand()%100;
    printf("%f", vt[i]);
    printf("\n");
    }
    
}