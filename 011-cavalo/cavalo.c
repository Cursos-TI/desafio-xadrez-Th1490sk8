/*movimento do cavalo, duas casas para cima e uma para a direita  */

#include <stdio.h>

int main() {
    int movimentocompleto = 1;
    char direcao[20];
    char lado[20];

    printf("Para onde você quer movimentar o cavalo? ");
    scanf("%s", direcao);

    printf("Ele vai para a direita ou esquerda? ");
    scanf("%s", lado);

    while (movimentocompleto--) {
        for (int i = 0; i < 2; i++) {
            printf("Movimentando para %s\n", direcao);
        }
        printf("Lado escolhido: %s\n", lado);
    }

    return 0;
    
}


