# include <stdio.h>  //jogo do xadrez

int main() {
    int movimentocompleto = 1;
    char direcao[20];
    char lado[20];
    int i = 0;

        for(int i = 0; i < 5; i++) { // Loop para repetir 5 vezes
            printf("Torre 5 casas para a direita\n");
        }

        while (i < 8) { // Loop para repetir 5 vezes
            printf("Rainha 8 casas para a esquerda\n");
            i++;
        }

        i = 1; // Reinicia o contador para o próximo loop
        do { // Loop para repetir 5 vezes
            printf("Bispo 5 casas na diagonal superior direita\n");
            i++;
        } while (i < 6);

// adicionado o movimento do cavalo

        printf("Para onde você quer movimentar o cavalo, cima ou baixo? ");
    scanf("%s", direcao);

    printf("Ele vai para a direita ou esquerda? ");
    scanf("%s", lado);

    while (movimentocompleto--) 
    { 
        for (int i = 0; i < 2; i++) {
            printf("Movimentando para %s\n", direcao);
        }
        printf("Lado escolhido: %s\n", lado);
    }


    return 0;    
}