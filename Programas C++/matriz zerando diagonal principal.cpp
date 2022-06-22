#include <stdio.h>
int main(){
	int numeros[4][4];
	int lin, col, cont;
	
	cont = 0;
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			printf("Digite um valor: ");
			scanf("%d", &numeros[lin][col]);
			if(numeros[lin][col] == numeros[cont][cont]){
				numeros[lin][col] = 0;
			}
			
		}
		cont = cont+1;
	}
	
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			printf("%d", numeros[lin][col]);
		}
		printf("\n");
	}
	
	
	
}
