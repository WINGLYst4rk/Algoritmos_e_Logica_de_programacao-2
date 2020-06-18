//programa extraido do livro da Unicesumar de Algoritmos e logica de programação 2
//apenas um aprendizado sobe como os structs funcionam

//declaração das bibliotecas necessarias
#include <stdio.h>
#include <locale.h>

//inicio do código
struct produto //declaração do struct
{
	int codigo;
	char descricao[50];
	float preco;
	int saldo;
};

int main()
{
	setlocale(LC_ALL,""); /*uso da biblioteca locale para permitir o acento*/
	struct produto ficha;
	
	printf("Digite o código do produto:");
	scanf("%d",&ficha.codigo);
	printf("Digite a descrição do produto:");
	scanf("%s", ficha.descricao);
	printf("Digite o preço do produto:");
	scanf("%f", &ficha.preco);
	printf("Digite o saldo do protudo:");
	scanf("%d", &ficha.saldo);
	
	printf("Código : %d\n", ficha.codigo);
	printf("Descrição : %s\n", ficha.descricao);
	printf("Preço : %.2f\n", ficha.preco);
	printf("Saldo : %d\n", ficha.saldo);
	
	return(0);
}
