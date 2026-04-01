#include <stdio.h>
#include <stdlib.h>

int main (){
	int num;
	printf("Digite um numero para ver a tabuada: ");
	scanf("%d", &num);
	
	printf("Tabuada de %d:\n", num);
    for (int i = 1; i <= 20; i++) {         //i-=10 Antes de cada repetição, o programa verifica se i é menor ou igual a 10.
	// i++ é o mesmo que escrever i = i + 1
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
