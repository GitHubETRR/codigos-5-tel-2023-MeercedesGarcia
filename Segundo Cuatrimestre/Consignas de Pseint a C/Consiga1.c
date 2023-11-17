#include <stdio.h>
#include <math.h>
#define PI 3.14159

void bienvenida(void);
float Real(void);
float imagen(void);
float resultado_modulo(float, float);
float resultado_fase(float, float);

int main (void) {
    float real,img,mod,fase;
    bienvenida();
    real=Real();
    img=imagen();
    mod=resultado_modulo(real, img);
    fase=resultado_fase(real, img);
    return 0;
}

void bienvenida(void){
    printf("Bienvenido al programa con el podemos calcular el modulo y el angulo de un numero complejo\n");
}
float Real(void){
    float real;
    printf("Ingresar la parte real\n");
    scanf("%f",&real);
    return (real);
}
float imagen(void) {
    float img;
    printf("Ingresar la parte imaginaria\n");
    scanf("%f",&img);
    return (img);
}
float resultado_modulo(float real, float img){
    float mod;
    mod= sqrt((real*real)+(img*img));
    printf("El valor del modulo es de: %f\n", mod);
    return (mod);
}
float resultado_fase(float real, float img){
    float fase;
    fase= atan((img/real))*(180/PI);
    printf("El valor de la fase es de: %f\n", fase);
    return (fase);
}