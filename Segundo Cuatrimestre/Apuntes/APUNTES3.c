#include <stdio.h> 
#define CANT_MAX 5 
void imprime_temps(int []);
void ingreso_temps(int []);
int calcula_prom(int []);

int main (void){
    int temp[CANT_MAX];
    int temp_prom;
    //ingreso_temps(temp);
    temp_prom=calcula_prom(temp);
    imprime_temps(temp);
    printf("El promedio de las temperaturas fue de: %d\n",temp_prom);
    return 0;
}

void ingreso_temps(int vect[]){
    for(int i=0;i<CANT_MAX;i++){
            printf("Ingresa la temperatura %d: ",i+1);
            scanf("%d",&vect[i]);
    }
}

void imprime_temps(int vect[]){
    for(int i=0;i<CANT_MAX;i++){
            printf("La temperatura %d fue de: %d \n",i+1,vect[i]);
    }
}

int calcula_prom(int vect[]){
    int prom=0;
    for(int i=0;i<CANT_MAX;i++){
      //  prom=prom+vect[i];
        prom+=vect[i];
    }
    prom/=CANT_MAX;
    return prom;

}
