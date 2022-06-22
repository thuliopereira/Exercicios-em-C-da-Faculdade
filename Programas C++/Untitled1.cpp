#include <stdio.h>
main(){
	char nomeUser;
	int idadeUser, anoNascimentoUser;
	int anoAtual = 2022;
	float pesoUser, alturaUser, imcUser;
	printf("Bem vindo no nosso sistema :) \n");
	printf("Voce poderia nos informar seu nome: \n");
	scanf("%c", &nomeUser);
	printf("Seu ano de nascimento: \n");
	scanf("%d", &anoNascimentoUser);
	printf("Informe seu peso: \n");
	scanf("%f", &pesoUser);
	printf("Informe sua altura: \n");
	scanf("%f", &alturaUser);
	idadeUser = anoAtual - anoNascimentoUser;
	imcUser = (pesoUser/alturaUser)/alturaUser;
	printf("Ola %c, voce tem %d anos de idade e seu IMC eh %.3f (Peso %.3f e Altura %.2f) \n", nomeUser, idadeUser, imcUser, pesoUser, alturaUser);
}
