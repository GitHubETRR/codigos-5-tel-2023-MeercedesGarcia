#include  <stdio.h>
#define CANT_MAX 10

int main(void){
    int temp[CANT_MAX]; //el numero indica cuantos espacios en memoria tengo respecto a la variable (32 bits)
for(int i=0;i<CANT_MAX;i++){
    printf("Ingresar la temperatura %d:", i+1);
    scanf("%d",&temp[i]);

}
  return 0;
}