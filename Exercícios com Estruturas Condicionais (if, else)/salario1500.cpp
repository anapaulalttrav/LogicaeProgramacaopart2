#include <stdlib.h>
#include <stdio.h>

int main(){
	float salario;
	printf("Digite o salario do funcionario: R$  ");
	scanf ("%f", &salario);
	
	if(salario<1500.00) {
		salario = salario * 1.05;               //lembrar da aula de mat computacional que se é um aumento é o 100% + 5% ou seja 1+0.5
		printf("Novo salario com 5%% de aumento: R$ %.2f\n", salario); //2 %% para um o pc entender que é uma % e outro para imprimir na tela	
	}
	else {
		printf("Salario nao sofreu aumento: R$ %.2f\n", salario);
	}
	
	return 0;
}
