#include <stdio.h>

int main() {
    float num, soma = 0;
    int contador = 0;

    printf("Digite um numero (0 para sair): ");
    scanf("%f", &num);

    // Estrutura de Repetição While
    while (num != 0) {
        soma += num;
        contador++;
        printf("Digite um numero (0 para sair): ");
        scanf("%f", &num);
    }

    // Condicional para evitar divisao por zero
    if (contador > 0) {
        printf("Media: %.2f\n", soma / contador);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }

    return 0;
}

