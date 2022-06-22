#include <stdio.h>
#include <stdlib.h>
int main(){
	char letra;
	int cont, letraA, letraE, letraI, letraO, letraU, outrasLetras;
	printf("iai carai");
	
	while(letra != '.')
	{
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	if(letra == 'a'){
		letraA = letraA+1;
	}else if(letra == 'e'){
		letraE = letraE+1;
	}else if(letra == 'i'){
		letraI = letraI+1;
	}else if(letra == 'o'){
		letraO = letraO+1;
	}else if(letra == 'u'){
		letraU = letraU+1;
	}else{
		outrasLetras = outrasLetras+1;
	}
	fflush(stdin);
		
	}	
	printf("Numero de letras A digitadas: %d \n", letraA);
	printf("Numero de letras E digitadas: %d \n", letraE);
	printf("Numero de letras I digitadas: %d \n", letraI);
	printf("Numero de letras O digitadas: %d \n", letraO);
	printf("Numero de letras U digitadas: %d \n", letraU);
}
