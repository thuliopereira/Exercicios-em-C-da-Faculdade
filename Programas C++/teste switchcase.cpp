#include<stdio.h>
int main(){
	int menu;
	printf("Selecione o seu veiculo \n");
	printf("----------------------- \n");
	printf("1 - Carro \n");
	printf("2 - Moto \n");
	printf("3 - Bike \n");
	printf("4 - A pe \n");
	scanf("%d", &menu);
	
	switch(menu){
		case 1: {
			printf("Foda eh o IPVA ne \n");
			break;
		}
		
		case 2: {
			printf("So nao cai, pelo amor... \n");
			break;
		}
		
		case 3: {
			printf("Ate saudavel, mas haja canela e as vezes enche o saco \n");
			break;
		}
		
		case 4: {
			printf("Ai e BO hein, mas se e o que tem para hoje, bora \n");
			break;
		}
		
		default: {
			printf("Aperta o botao certo mane");
			break;
		}
	}
	
	
	printf("Fim do programa \n");
		
}
