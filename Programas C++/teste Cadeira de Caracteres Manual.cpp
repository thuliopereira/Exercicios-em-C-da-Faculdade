#include <stdio.h>
#include <string.h>
int main(){
	char nome[6];
	int cont, cont2;
	
	for(cont=1;cont<=6;cont=cont+1)
	{
		printf("Digite uma letra do seu nome: ");
		scanf("%c", &nome[cont]);
		getchar();
		fflush(stdin);
	}

	
	for(cont2=1;cont2<=6;cont2=cont2+1)
	{
		printf("%c", nome[cont2]);
	}
	
	
	
	
}
