#include <stdio.h>
#include <math.h>
#define PI 3.14159

void bienvenida(void);
float modulo(void);
float fase_ingresada(void);
float resultado_real(float,float);
float resultado_img(float, float);

int main (void) {
    float mod, fase, real, img;
    bienvenida();
    mod=modulo();
    fase=fase_ingresada();
    real=resultado_real(mod, fase);
    img=resultado_img(mod, fase);
}
void bienvenida(void){
    printf("Bienvenido al programa para calcular la forma rectangular del numero complejo ingresado\n");
}
float modulo(void){
    float mod;
    printf("Ingrese el modulo\n");
    scanf("%f",&mod);
    return (mod);
}
float fase_ingresada(void){
    float fase;
    printf("Ingrese la fase\n");
    scanf("%f",&fase);
    return (fase);
}
float resultado_real(float mod,float fase){
    float real;
    real= mod*cos(fase * (PI/180));
    printf("El valor de la parte real es de %f\n", real);
    return(real);
}
float resultado_img(float mod, float fase){
    float img;
    img= mod*sin(fase * (PI/180));
    printf("El valor de la parte imaginaria es de j%f\n", img);
    return (img);
}