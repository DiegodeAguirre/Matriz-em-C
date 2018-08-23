#include<stdio.h>
#include<stdlib.h>


int main(){
	
	float nota[15][5];
	char nome[15][30];
	float media[5];
	int i, j;
	float somanotas;
	
	printf("Informe o nome e as notas dos 15 alunos: ");
	for(i=0; i<15; i++){//inicio for
		printf("\n Nome %i:", i + 1);
		fflush(stdin);
		gets(nome[i]);
	}//fim for
	for(j=0; j<15; j++){//inicio for
		printf("\nNota %i:", j+1);
		scanf("%f", &notas[i][j]);
		somanotas = somanotas + nota[i][j];
			
	}//fim for
	media[i] = somanota / 5;
	for(i=0; i<15; i++){//inicio for
		if(media[i] >= 6){//inicio if
			printf("Aprovado", nome[i]);
			
		}//fim if
		else
			if(media[i] < 3){//inicio if
				printf("Reprovado", nome[i]);
			}//fim if
			else
				printf("Exame", nome[i]);
	}//fim for
}
