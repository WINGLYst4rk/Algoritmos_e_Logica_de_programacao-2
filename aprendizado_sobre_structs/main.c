//programa extraido do livro da Unicesumar de Algoritmos e logica de programa��o 2
//apenas um aprendizado sobe como os structs funcionam

//declara��o das bibliotecas necessarias
#include <stdio.h>
#include <locale.h>

//inicio do c�digo
struct produto //declara��o do struct
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
	
	printf("Digite o c�digo do produto:");
	scanf("%d",&ficha.codigo);
	printf("Digite a descri��o do produto:");
	scanf("%s", ficha.descricao);
	printf("Digite o pre�o do produto:");
	scanf("%f", &ficha.preco);
	printf("Digite o saldo do protudo:");
	scanf("%d", &ficha.saldo);
	
	printf("C�digo : %d\n", ficha.codigo);
	printf("Descri��o : %s\n", ficha.descricao);
	printf("Pre�o : %.2f\n", ficha.preco);
	printf("Saldo : %d\n", ficha.saldo);
	
	return(0);
}
