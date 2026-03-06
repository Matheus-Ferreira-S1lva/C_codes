/*A Estratégia dos Baldes (Arrays)

Como existem apenas problemas de 'A' a 'Z', você pode tratar cada letra como um índice de um array.

Dica: Crie um array para contar as tentativas incorretas de cada problema. Se o problema 'A' teve 2 incorretos antes do correto, você armazena esse "2" na posição referente ao 'A'.

Dica 2: Crie um array (ou booleano) para marcar quais problemas já foram resolvidos (correct). Isso é vital porque, se um problema nunca for resolvido, as tentativas incorretas dele não contam pontos!

#include <stdio.h>*/

#include <stdio.h>
#include <string.h>

int main() {

    int n;
    
    while (scanf("%d", &n) && n != 0) {
        
        int total_resolvidos = 0;
        int pontuacao_total = 0;
        
        int erros[26] = {0};

        int resolvidos[26] = {0};
        
        int tempo;
        char letra;
        char julgamento[20];

        for(int i = 0; i < n; i++) {
            scanf("%c %d %s", &letra, &tempo, julgamento);

            int indice = letra - 'A';

            if (strcmp(julgamento, "incorrect") == 0) {
                if (resolvidos[indice] == 0) {
                erros[indice]++;
                }
            } else if (strcmp(julgamento, "correct") == 0) {
                if (resolvidos[indice] == 0) {
                    resolvidos[indice] = 1;
                    total_resolvidos++;

                    pontuacao_total += tempo + (erros[indice] * 20);
                }
            }
        }
 
        printf("%d %d\n", total_resolvidos, pontuacao_total);
    }   

    return 0;

}
