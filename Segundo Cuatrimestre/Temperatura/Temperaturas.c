#include <stdio.h>
#define cant 10
#define tempmax 20
#define tempmin 10


//las temperaturas float.
void ingresar_temps(int[]);
int calcular_promedio(int[]);
int calcular_min(int[]);
int calcular_max(int[]);
int calcular_rango(int[]);
void print_resultados(int, int, int, int);


int main(void){
    int temp[cant];
    ingresar_temps(temp);
    int promedio=calcular_promedio(temp);
    int min=calcular_min(temp);
    int max=calcular_max(temp);
    int rango=calcular_rango(temp);
    print_resultados(promedio, min, max, rango);

}


void ingresar_temps(int temp[]){
    for(int i=0; i<cant; i++){
        printf("ingresa la temperatura N%d: ",i++);
        scanf("%d", &temp[i]);
    }
}


int calcular_promedio(int temp[]){
    int promedio=0;
    for(int i=0; i<cant; i++){
        promedio+=temp[i];
    }
    promedio/=cant;
    return promedio;
}


int calcular_min(int temp[]){
    int min=temp[0];
    for(int i=0; i<cant; i++){
        if(temp[i]<min){
            min=temp[i];
        }
    }
    return min;
}


int calcular_max(int temp[]){
    int max=temp[0];
    for(int i=0; i<cant; i++){
        if(temp[i]>max){
            max=temp[i];
        }
    }
    return max;
}


int calcular_rango(int temp[]){
    int rango=0;
    for(int i=0; i<cant; i++){
        if(temp[i]>=tempmin && temp[i]<=tempmax){
            rango++;
        }
    }
    return rango;
}


void print_resultados(int promedio, int min, int max, int rango){
    printf("El promedio de temperaturas es de: %d°\n", promedio);
    printf("La temperatura minima fue de: %dC y la maxima de: %dC\n", min, max);
    printf("Hay %d temperaturas entre %d y %d\n", rango, tempmin, tempmax);
}
