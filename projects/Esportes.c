#include <stdio.h>

int main() {
    int ano;
    
    printf("Digite um ano para verificar se foi um ano de Olimpíada ou Copa do Mundo: ");
    scanf("%d", &ano);

    if (ano >= 1930 && (ano - 1930) % 4 == 0) {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d \n", ano);
    } else if (ano >= 1896 && (ano - 1896) % 4 == 0) {
        printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d\n", ano);
    } else if (ano >= 1924 && (ano - 1924) % 4 == 0) {
        printf("%d Teve olímpiadas de inverno(mas achei legal colocar)!\n", ano);
    } else {
        printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano de %d\n", ano);
    }

    return 0;
}

