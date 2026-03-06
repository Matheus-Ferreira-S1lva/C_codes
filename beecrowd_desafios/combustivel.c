/*O Cenário: Você tem um avião com 2 tanques (Asa Esquerda e Asa Direita). Você precisa ler quanto combustível tem em cada um e avisar se o total é seguro para o voo.

O que você deve fazer (Passo a Passo):

    Crie um array de float com 2 posições.

    Use um for bem simples para ler os dois valores.

    Some os dois valores em uma variável total.

    Use o Operador Ternário para imprimir:

        Se o total for menor que 100 litros: "ALERTA: ABASTECER"

        Se for 100 ou mais: "NÍVEL SEGURO"  */

#include <stdio.h>

int main() {
    float assas[2];
    float total = 0;

    printf("Fuel monitor\n");

    for(int i = 0; i < 2; i++) {
        printf("Tank %d: ", i + 1);
        scanf("%f", &assas[i]);
        total += assas[i];
    }

    printf("\nFlight status: %s\n", (total < 1000) ? "WARNING: FUEL UP" : "SAFE LEVEL");

    printf("Liters on the wings: %.2f | %.2f\n", assas[0], assas[1]);
    printf("Total fuel: %.2f \n", total);

    return 0;
}