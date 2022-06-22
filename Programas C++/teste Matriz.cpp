#include <stdio.h>
int main(){
	int numeros[3][4];
	int lin, col;
	int contPar, contImpar;
	
	for(lin=0;lin<3;lin++){
		for(col=0;col<4;col++){
		printf("Digite um numero e vamos separar entre par ou impar: ");
		scanf("%d", &numeros[lin][col]);
			}
	}
	for(lin=0;lin<3;lin++){
		for(col=0;col<4;col++){
			printf("%d", numeros[lin][col]);
			if(numeros[lin][col]%2 == 0){
				contPar = contPar+1;	
			}else{
				contImpar = contImpar+1;
			}
		}
		printf("\n");
	}	
	
	printf("Foram digitados %d numeros PARES \n", contPar);
	printf("Foram digitados %d numeros IMPARES", contImpar);
}
