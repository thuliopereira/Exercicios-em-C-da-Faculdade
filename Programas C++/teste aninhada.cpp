#include <stdio.h>
int main(){
	
	int numero;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &numero);
	
	if((numero > 0) && (numero < 100)){
		printf("Casa dezena");
		}else if((numero > 100) && (numero < 1000)){
			printf("Casa centenaria");
			}else if((numero > 1000)){
				printf("Casa milezimal");	
			} else{
				printf("Numero Nulo");
			}
}   

