#include <stdio.h>
#include <stdlib.h>

int main(){

	float notas[5]={0};
	float soma=0;
	float media=0;


	printf("Insira 5 notas: \n");

	for (int i=0; i<5;i++)
		scanf("%f",&notas[i]);

	for (int i=0;i<5; i++)
		soma+=notas[i];

	media=soma/5;

	printf("a media do aluno eh: %.2f \n",media);

  return 0;
}
