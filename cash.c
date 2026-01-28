#include <stdio.h>

int calcular_25(int cents);
int calcular_10(int cents);
int calcular_5(int cents);
int calcular_1(int cents);


int main(void)
{
    int cents;
    do{
        printf("How many cents are owed?");
        scanf("%i", &cents);
        while (getchar() != '\n');            
    } while(cents < 0);


    int quartos = calcular_25(cents);
    cents = cents - (quartos * 25);

    int dez = calcular_10(cents);
    cents = cents - (dez * 10);

    int cinco = calcular_5(cents);
    cents = cents - (cinco * 5);

    int um = calcular_1(cents);
    cents = cents - (um * 1);

    int total_moedas = quartos + dez + cinco + um;
    printf("%i\n", total_moedas);

    return 0;
}

int calcular_25(int cents)
{
    return cents / 25;
}

int calcular_10(int cents)
{
    return cents / 10;
}

int calcular_5(int cents)
{
    return cents / 5;
}

int calcular_1(int cents)
{
    return cents / 1;
}
