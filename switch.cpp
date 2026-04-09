#include <stdio.h>
int main() {
     int codigo, quantidade;
    float preco_unidade = 0, total;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
        
			preco_unidade = 1.20;
            printf("Voce escolheu o cachorro quente.\n");
            break;
        case 101:
			preco_unidade = 1.30;
            printf("Voce escolheu o bauru simples.\n");
            break;
        case 102:
        	preco_unidade = 1.50;
        	printf("Voce escolheu o bauru com ovo.\n");
        	break;
        case 103:
			 preco_unidade = 1.20; 
            printf("Voce escolheu o hamburguer.\n");
            break;
        case 104:
        	preco_unidade = 1.70; // Cheeseburguer
        	printf("Voce escolheu o cheeseburguer.\n");
        	break;
    	case 105:
        	preco_unidade = 2.20; // Suco
        	printf("Voce escolheu o suco.\n");
		case 106:
        	preco_unidade = 1.00; // Refrigerante
        	printf("Voce escolheu o refrigerante.\n");
            
        default:
            printf("Opcao invalida!\n");
    }
     if (preco_unidade !=0){
    total = preco_unidade * quantidade;
            printf("Valor total a pagar: R$ %.2f\n", total);
        }
    return 0;
}
