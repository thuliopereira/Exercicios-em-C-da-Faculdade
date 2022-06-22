#include <stdio.h>
int main(){
	float nota1, nota2, media;
	int alunos, cont;
	
	do
	{
		alunos = alunos+1;
		printf("Digite a nota do aluno %d : ", alunos);
		scanf("%f", &nota1);
		fflush(stdin);
		printf("Digite a segunda nota do aluno %d : ", alunos);
		scanf("%f", &nota2);
		fflush(stdin);
		media = (nota1+nota2) / 2;
		printf("A media do aluno %d foi: %.2f", alunos, media);
		if(media >= 7){
			printf("O aluno foi APROVADO \n");
		}else {
			printf("O aluno foi REPROVADO \n");
		}
		printf("Deseja continuar? 1 - SIM // 2 - NAO: ");
		scanf("%d", &cont);
		fflush(stdin);
	}
	while(cont == 1);
		
}
