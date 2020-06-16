//programa de switch case
/*importação das bibliotecas*/
#include <stdio.h>
#include <locale.h>

int main(){//inicio do programa
//declaração de variaveis
	setlocale(LC_ALL,"");
	int op;
	float num1, num2, resultado;
	//impresão e coleta de dados
	printf("\nDigite o primeiro número: ");
	scanf("%f", &num1);
	printf("\nDigite o segundo número: ");
	scanf("%f", &num2);
	printf("Escolha a operação \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n");
	scanf("%d", &op);
	switch("%d", op){
		case 1:
			resultado = num1 + num2;
			printf("A soma é: %.2f\n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("A subtração é: %.2f\n", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("A multiplicação é: %.2f\n", resultado);
			break;
		case 4:
			resultado = num1 / num2;
			printf("A divisão é: %.2f\n", resultado);
			break;
		default:
			printf("Opção invalida.\n");
			break;
	}
	return(0);
	
}


