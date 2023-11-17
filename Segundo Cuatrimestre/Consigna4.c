#include <stdio.h>
#include <math.h>
#define PI 3.14159

void bienvenida(void);
float ingreso_real(void);
float imagen(void);
float ingreso_frec(void);
float resistencia(float);
float inductancia(float, float);
float capacitancia(float, float);

int main (void){
    float real, img, frec, res, imgl, imgc;
    bienvenida();
    real=ingreso_real();
    img=imagen();
    frec=ingreso_frec();
    res=resistencia(real);
    if (img>0){
        imgl=inductancia(img, frec);    
    } else {
        imgc=capacitancia(img, frec);
    }
    return 0;
}
void bienvenida(void){
    printf("Bienvenido al programa\n");
}
float ingreso_real(void){
    float real;
    printf("Ingrese la parte real. Colocar 0 si no hay parte real\n");
    scanf("%f", &real);
    return(real);
}
float imagen(void){
    float img;
    printf("Ingrese la parte imaginaria. Si no hay parte imaginaria, colocar 0\n");
    scanf("%f", &img);
    return(img);
}
float ingreso_frec(void){
    float frec;
    printf("Ingrese la frecuencia de trabajo\n");
    scanf("%f", &frec);
    return(frec);
}
float resistencia(float real){
    if (real!=0) {
        printf("La resistencia es de: %f ohms\n", real);
    } else {
        printf("No hay resistencia\n");
    }
}
float inductancia(float img, float frec){
    float imgl;
    if (img !=0){
        imgl= img/(2*PI*frec);
        printf("El valor del inductor es de: %f H\n", imgl);
    } else {
        printf("No hay parte imaginaria\n");
    }
}
float capacitancia(float img, float frec){
    float imgc;
    if (img !=0){
        imgc = img/(2*PI*frec);
        printf("El valor del capacitor es de: %f F\n", imgc);
    } else {
        printf("No hay parte imaginaria\n");
    }
}