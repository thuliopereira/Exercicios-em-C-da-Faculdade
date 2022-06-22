#include <stdio.h>
#include <stdlib.h>
int main(){
	float salario, mediaSalario, maiorSalario;
	int cont;
	

	for (cont=1;cont<=4;cont=cont+1)
	{
		printf("Digite o salario do funcionario: ");
		scanf("%f", &salario);
		fflush(stdin);
		mediaSalario = mediaSalario + salario;
		if(maiorSalario < salario){
			maiorSalario = salario;
		}
		
	}

	mediaSalario = mediaSalario / 2;
	printf("O maior salario eh %.3f numa empresa com media salarial %.3f ", maiorSalario, mediaSalario);

}
