#include <stdio.h>

int main() {
    int ano;
    
    printf("Digite um ano para verificar se foi um ano de Olimp�ada ou Copa do Mundo: ");
    scanf("%d", &ano);

    if (ano >= 1930 && (ano - 1930) % 4 == 0) {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d \n", ano);
    } else if (ano >= 1896 && (ano - 1896) % 4 == 0) {
        printf("Os Jogos Ol�mpicos de Ver�o ocorreram no ano de %d\n", ano);
    } else if (ano >= 1924 && (ano - 1924) % 4 == 0) {
        printf("%d Teve ol�mpiadas de inverno(mas achei legal colocar)!\n", ano);
    } else {
        printf("N�o houve Jogos Ol�mpicos de Ver�o ou Copa do Mundo no ano de %d\n", ano);
    }

    return 0;
}

