#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define POLAR 0 
#define BINOM 1

void bienvenida(void);
float ingreso_real(void);
float imagen(void);
float resultado_polar_mod(float, float);
float resultado_polar_fase(float, float);
int binomica_o_polar(void);

int main (void) {
    float real1, img1, real2, img2, real, img, mod, fase, formato;
    bienvenida();
    printf("Ingrese el valor de la parte real e imaginaria del primer numero complejo\n");
    real1=ingreso_real();
    img1=imagen();
    printf("Ahora ambos valores del segundo numero complejo\n");
    real2=ingreso_real();
    img2=imagen();
    real=real1+real2;
    img=img1+img2;
    formato=binomica_o_polar(); 
    if (formato==BINOM) {
        printf("el resultado es de %f J%f\n", real, img);
    } else {
        mod=resultado_polar_mod(real, img);
        fase=resultado_polar_fase(real, img);
        printf("el resultado es de: %f e^J%f\n", mod, fase);
    }
    return 0;
}
void bienvenida(void){
    printf("Bienvenido al programa\n");
}
float ingreso_real(void){
    float real;
    scanf("%f", &real);
    return (real);
}
float imagen(void){
    float img;
    scanf("%f", &img);
    return (img);
}
int binomica_o_polar(void){
    int formato;
    printf("en que formato quiere ver su resultado? binomico (1) o polar (0)\n");
    scanf("%d", &formato);
    return(formato);
}
float resultado_polar_mod(float img, float real){
    float mod;
    mod= sqrt((real*real)+ (img*img));
    return (mod);
}
float resultado_polar_fase(float real, float img){
    float fase;
    fase= (atan(img/real))*(180/PI);
    return (fase);
}