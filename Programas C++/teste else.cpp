#include <stdio.h>
int main(){
int escolha;

printf("Voce é homem (1) ou mulher (0)? \n");
scanf(" %d", &escolha);

if(escolha >= 1){
	printf("Voce eh um homem");
} else {
	printf("Voce eh uma mulher");
}
}
