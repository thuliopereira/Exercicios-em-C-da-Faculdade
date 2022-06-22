#include <stdio.h>
int main(){
	int numeros[4][4];
	int lin, col;
	
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			printf("Digite um valor: ");
			scanf("%d", &numeros[lin][col]);
		}
	}
	
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			printf("%d", numeros[col][lin]);
		}
	printf("\n");
	}
}
