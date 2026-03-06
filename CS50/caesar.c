#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


//verifica se o numero é diferende de dois, a chave.
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Uso: ./caesar key\n");
        return 1;
    }
// verifica se o usuario digitou um numero ou não.
int n = strlen(argv[1]); 
for (int i = 0; i < n; i++)
{
    if (!isdigit(argv[1][i]))
    {
        printf("Usag: ./caesar key\n");
        return 1;
    }
}


    int k = atoi(argv[1]);

    char msg[100];
    printf("Texto não criptografado: ");
    scanf("%s", msg);

    printf("ciphertext: ");

for (int i = 0, n = strlen(msg); i < n; i++)
    {
        // Se for MAIÚSCULA
        if (isupper(msg[i]))
        {
            printf("%c", (msg[i] - 'A' + k) % 26 + 'A');
        }
        // Se for MINÚSCULA
        else if (islower(msg[i]))
        {
            printf("%c", (msg[i] - 'a' + k) % 26 + 'a');
        }
        // Se não for letra (ex: ! ou ?), imprime do jeito que está
        else
        {
            printf("%c", msg[i]);
        }
    }

    printf("\n"); // Pula uma linha no final, como o CS50 exige
    return 0;
}