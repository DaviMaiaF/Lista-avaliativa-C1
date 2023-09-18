#include <stdio.h>

int main() {
   
	int calculo, soma, dado;
	scanf("%d", &calculo);
	
	if(calculo % 2 == 0){
	 printf("%d eh par\n", calculo);
	}
	else{
	 printf("%d eh impar\n", calculo);
	}
	
	soma = 0;
	
	while(calculo > 0){
		dado = calculo % 10;
		soma = soma + dado;
		calculo = calculo / 10;
	}
	
	printf("\n Soma dos digitos do numero dado = %d\n", soma);
    return 0;
}

