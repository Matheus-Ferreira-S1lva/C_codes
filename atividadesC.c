//É o esqueleto que você vai usar em 90% dos exercícios em C:

// 1. Bibliotecas
#include <stdio.h>
#include <stdbool.h> // Para usar true/false

// 2. Protótipo ou Definição da Função (Fica fora da main)
bool nome_da_funcao(int x) {
    // Lógica aqui
    return true;
}

// 3. Função Principal
int main(void) {
    // Variáveis locais da main
    int numero = 10;
    
    // Chamada da função (passando valor)
    bool resultado = nome_da_funcao(numero);
    
    // Mostrar resultado
    if (resultado) {
        printf("Deu certo!\n");
    }
}