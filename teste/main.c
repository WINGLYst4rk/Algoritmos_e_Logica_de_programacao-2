/*inclus�o de bibliotecas*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

/*come�o do programa*/
int main(){
	int num, quadrado;
	float raiz;
	setlocale(LC_ALL,"");
	
	//informa��es ao usuario
	
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	if(num % 2 == 0){//caso o n�mero seja par
		raiz = sqrt(num);
		printf("\nA raiz quadrada �: %.3f", raiz);
	}else{//caso o n�mero seja �mpar
		quadrado = num * num;
		printf("\nO quadrado do n�mero �: %d", quadrado);
	}
	return(0);
}/*fim do programa*/
