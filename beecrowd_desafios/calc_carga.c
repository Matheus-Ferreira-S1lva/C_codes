/*Cenário: Você precisa criar um programa que monitore o peso das bagagens de um pequeno avião. O avião tem capacidade para 5 malas.

Requisitos:

    Crie um Array de float para armazenar o peso de 5 malas.

    Use um laço for para ler os pesos via scanf.

    Após a leitura, o programa deve exibir:

        O peso total da carga.

        A média de peso das malas.

        O "Pulo do Gato" (Ternário): Para cada mala, use um Operador Ternário para imprimir se ela está "DENTRO DO LIMITE" (até 23kg) ou "EXCESSO DE PESAGEM".

    No final, use um if/else para dizer se o avião pode decolar (Limite total: 100kg).*/

#include <stdio.h>

int main() {
    float malas[5];
    float pesoTotal = 0;
    int totalmalaslidas = 0;
    printf("--- CHECK-IN ---\n");

    for(int i = 0; i < 5; i++) {
        printf("Peso de mala %d: ", i + 1);
        scanf("%f", &malas[i]);
        pesoTotal += malas[i];
        totalmalaslidas++;

        if (pesoTotal > 100) {
            printf("\n!!! limite de 100kg excedido !!!\n");
            break;
        }

    }

    printf("\n--- Relatorio de pasagem ---\n");
    for(int i = 0; i < 5; i++) {
        printf("Mala %d: %.2fkg - %s\n", i + 1, malas[i], (malas[i] <= 23) ? "OK" : "EXCESSO");
    }

    printf("\nStatus: %s (Total: %.2fkg)\n", (pesoTotal <= 100) ? "Decolagem autorizada" : "Decolagem negada", pesoTotal);

    return 0; 
}