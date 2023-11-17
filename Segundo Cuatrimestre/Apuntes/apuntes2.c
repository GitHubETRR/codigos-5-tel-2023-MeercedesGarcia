#include  <stdio.h>
#define CANT_MAX 10
void imprime_temps (int []);
void ingreso_temps(int vect[]);
//primero constante en el if

int main(void){
int temp{CANT_MAX};
int temp_prom;
ingreso_temps(temp);
temp_prom=calculo_prom(temp);
printf("El promedio total de temperatura es de %d\n", temp_prom);
return 0;

}

int main(void){
    int temp[CANT_MAX]; //el numero indica cuantos espacios en memoria tengo respecto a la variable (32 bits)
for(int i=0;i<CANT_MAX;i++){
    printf("Ingresar la temperatura %d:", i+1);
    scanf("%d",&temp[i]);

}
  return 0;
}