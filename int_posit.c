// Fazer um programa para ler um número inteiro, e depois dizer se este número é negativo ou não.
//Ex: entrada -10 || saida negativo

 #include <stdio.h>

int main(void) {

    int number;
    char term;

    printf("Digite um numero: ");
    if (scanf("%i%c", &number, &term) != 2 || term != '\n') {
        printf("Apenas numero inteiro!");

    } else {
        if (number < 0) {
        printf("Negativo! Não é um numero positivo.");
    } else {
        printf("Sim! É um numero positivo.");
    }
}

    return 0;
}