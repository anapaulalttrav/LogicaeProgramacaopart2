#include <stdio.h>
#include <stdlib.h>

int main (){
	int ini, fim, soma = 0;
	printf("Digite o numero inicial: ");
    scanf("%d", &ini);
    printf("Digite o numero final: ");
    scanf("%d", &fim);
    
     // Ajustar caso o usuário digitar o final menor que o inicial
    if (ini > fim) {
        int temp = ini;
        ini = fim;
        fim = temp;
	}
	
	for (int i = ini; i <= fim; i++) {
        if (i % 2 != 0) { // Verifica se é ímpar e "! significa diferente de"
            soma += i;
        }
}

 printf("A soma dos numeros impares no intervalo eh: %d\n", soma);
    return 0;
}


