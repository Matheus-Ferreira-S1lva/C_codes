#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(float a, float b, float c) {

    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }

    if ((a + b <= c) || (b + c <= a) || (c + a <= b)) {
        return false;
    }

    return true;
}

int main(void){
    float b, a, c;
    
    printf("Qual o numero do 1° lado? ");
    scanf("%f", &b);
    printf("Qual o numero do 2° lado? ");
    scanf("%f", &a);
    printf("Qual o numero do 3° lado? ");
    scanf("%f", &c);

    bool resul = valid_triangle(b, a, c);

    if (resul) {
        printf("Sim, esses lados formam um triangulo!\n");
    } else {
        printf("Nao, esses valores nao podem formar um triangulo.\n");
    }

    return 0;
}
