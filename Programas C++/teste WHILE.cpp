#include <stdio.h>
int main(){
	float nota1, nota2, media;
	int alunos, cont;
	
	printf("Quantos alunos fizeram a prova: ");
	scanf("%d", &alunos);
	fflush(stdin);
	cont = 0;
	while (cont < alunos)
	{
		printf("Qual a nota do aluno %d: ", cont);
		scanf("%f", &nota1);
		fflush(stdin);
		printf("Qual a segunda nota do aluno %d: ", cont);
		scanf("%f", &nota2);
		fflush(stdin);
		media = (nota1 + nota2) / 2;
		printf("A media do aluno foi: %.2f \n", media);
		if(media >= 7){
			printf("O aluno foi APROVADO \n");
		}else{
			printf("O aluno foi REPROVADO \n");	
		}
		cont = cont + 1;
	}
	}
	
