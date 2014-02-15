#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Aulas.h"

int main() {
	float *nums;
	int i,aux,n = 0;

	printf("Ola, voce deseja calcular a media e mediana de quantos numeros?\n");
	scanf("%d",&n);
	aux = n;
	n *= sizeof(*nums);
	nums = (float*)malloc(n);

	for (i = 0;i < aux;i++) {
		printf("Por favor digite o %d numero\n",i+1);
		scanf("%f",&*(nums+i));
	}
	printf("Media: %.2f\nMediana: %.2f\n",media(nums,n),mediana(nums,n));

	free(nums);
	getche();
	return 0;
}