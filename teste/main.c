/*inclusão de bibliotecas*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

/*começo do programa*/
int main(){
	int num, quadrado;
	float raiz;
	setlocale(LC_ALL,"");
	
	//informações ao usuario
	
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	if(num % 2 == 0){//caso o número seja par
		raiz = sqrt(num);
		printf("\nA raiz quadrada é: %.3f", raiz);
	}else{//caso o número seja ímpar
		quadrado = num * num;
		printf("\nO quadrado do número é: %d", quadrado);
	}
	return(0);
}/*fim do programa*/
