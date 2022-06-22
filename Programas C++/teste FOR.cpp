#include <stdio.h>
int main(){
	int cont, numDigitado, maiorNumero;

	maiorNumero = 0;	
	for (cont=1;cont<=5;cont=cont+1)
	{
		printf("Digite um numero: ");
		scanf(" %d", &numDigitado);
		printf("%d \n", numDigitado);
		if(maiorNumero < numDigitado){
			maiorNumero = numDigitado;
		}
		
	}
	printf("O maior numero digitado foi: %d ", maiorNumero);
}
