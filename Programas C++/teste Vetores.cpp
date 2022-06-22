#include <stdio.h>
int main(){
	int testeVetores[5];
	int cont;
	printf("Digite 1/5 valor: ");
	scanf("%d", &testeVetores[0]);
	fflush(stdin);
	printf("Digite 2/5 valor: ");
	scanf("%d", &testeVetores[1]);
	fflush(stdin);
	printf("Digite 3/5 valor: ");
	scanf("%d", &testeVetores[2]);
	fflush(stdin);
	printf("Digite 4/5 valor: ");
	scanf("%d", &testeVetores[3]);
	fflush(stdin);
	printf("Digite 5/5 valor: ");
	scanf("%d", &testeVetores[4]);
	fflush(stdin);
	
	for(cont=0;cont<=4;cont=cont+1){
		printf("Os valores digitados foram %d \n", testeVetores[cont]);	
		
	}
	
	
}
