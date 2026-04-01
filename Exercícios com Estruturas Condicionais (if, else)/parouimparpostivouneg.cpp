#include <stdlib.h>
#include <stdio.h>

int main(){
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
	printf("%d eh par.\n", num);
	else 
	printf("%d eh impar\n", num);
	
	
	//Agora iremos checar se o número é positivo ou negativo
	
	if (num>0)
	printf("eh positivo\n");
	else if(num<0)
	printf("eh negativo\n");
	else
	printf("eh zero\n");
	
	return 0;
}
