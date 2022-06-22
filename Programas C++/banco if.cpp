#include <stdio.h>

int main(){
	char escolha;
	int acesso, saldo, saque;
	float money = 7694.25;
	acesso = saldo = saque = 0;
	printf("Bem vindo ao Banco Bancudo \n");
	printf("-------------------------- \n");
	printf("Deseja acessar sua conta? S/N \n");
	scanf(" %c", &escolha);
	if(escolha == 'S'){
		printf("Acesso concedido hein \n");
		acesso = 1;d
	}
	
	printf("Deseja consultar seu saldo? S/N \n");
	scanf(" %c", &escolha);
	if(escolha == 'S'){
		printf("Voce tem muitos dinheiros! Seu saldo eh %.2f \n", money);
		saldo = 1;
	}
	
	printf("Deseja realizar uma saque? Pode ser uma boa sacada! Y/N \n");
	scanf(" %c", &escolha);
	if(escolha == 'S'){
		printf("Estamos vomitando seu dinheiro, cuidado com a saidinha de banco! \n");
		saque = 1;
	}
	
	if((acesso == 1) && ((saldo == 1) && (saque == 1))){
		printf("Saque efetudado, va comprar um PC bala");
	} else {
		printf("Ihhh rapaiz, algo deu errado");
	}	
}
