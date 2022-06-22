#include <stdio.h>
#include <stdlib.h>
int main(){
	float salario, mediaSalario, maiorSalario;
	char inicialFuncionario, inicialMaiorSalario;
	int cont;
	
	maiorSalario = 0;
	mediaSalario = 0;
	for(cont=1;cont<=5;cont=cont+1){
		printf("Digite a inicial do funcionario: ");
		scanf(" %c", &inicialFuncionario);
		printf("Digite o salario do funcionario: ");
		scanf(" %f", &salario);
		fflush(stdin);
		mediaSalario = mediaSalario + salario;
}
	if(maiorSalario < salario){
			maiorSalario = salario;
			inicialMaiorSalario = inicialFuncionario;
		}
		
	

	mediaSalario = maiorSalario / cont;
	printf("O maior salario eh do funcionario %c que ganha %f numa empresa com media salaria %f ", inicialMaiorSalario, maiorSalario, mediaSalario);

}
