#include <stdio.h>//biblioteca de entrada e saida de dados

/*inicio do programa*/
int main(){
	//declaração de variaves
	int idade, ano, anoa;
	float altura;
	char nome[30];
	/*entrada de dados*/

	printf("Digite o seu nome: \n");
	scanf("%s", nome);
	printf("Digite a idade: \n");
	scanf("%d", &idade);
	printf("Digite a altura:\n ");
	scanf("%f", &altura);
	printf("Digite o ano atual: \n");
	scanf("%d", &anoa);
	
	/* processamento */
	ano = (idade - anoa)*-1;
	
	/*saida dados*/
	printf("\nO nome e: %s", nome);
	printf("\nA altura e: %.2f", altura);
	printf("\nA idade e: %d", idade);
	printf("\nO ano de nascimento e: %d", ano);
	return(0);
}

