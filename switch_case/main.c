//programa de switch case
/*importa��o das bibliotecas*/
#include <stdio.h>
#include <locale.h>

int main(){//inicio do programa
//declara��o de variaveis
	setlocale(LC_ALL,"");
	int op;
	float num1, num2, resultado;
	//impres�o e coleta de dados
	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("\nDigite o segundo n�mero: ");
	scanf("%f", &num2);
	printf("Escolha a opera��o \n 1 - Soma \n 2 - Subtra��o \n 3 - Multiplica��o \n 4 - Divis�o \n");
	scanf("%d", &op);
	switch("%d", op){
		case 1:
			resultado = num1 + num2;
			printf("A soma �: %.2f\n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("A subtra��o �: %.2f\n", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("A multiplica��o �: %.2f\n", resultado);
			break;
		case 4:
			resultado = num1 / num2;
			printf("A divis�o �: %.2f\n", resultado);
			break;
		default:
			printf("Op��o invalida.\n");
			break;
	}
	return(0);
	
}


