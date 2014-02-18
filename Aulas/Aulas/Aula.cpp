#include <stdio.h>
#include <conio.h>

#define ITERACAO 100
#define VET_TAMANHO 50

/*void troca(int *v1,int *v2) {
	int aux = *v1;
	*v1 = *v2;
	*v2 = aux;
}*/


int main() {

	/* Exercicio 1 */
	int valor = 0;
	int *p = &valor;
	for (;valor <= ITERACAO;(*p)++)
		printf("Resultado: %d\n",valor);

	/* Exercicio 2 */
	float vet[VET_TAMANHO];
	float media = 0.0,meio = 0.0;
	int i,pos,it;
	int *div = &i;

	/* Media */
	printf("Digite o numero de iteracoes: \n");
	scanf("%d",&it);
	for (i = 0;i < it;i++) {
		printf("Digite numeros:\n");
		scanf("%f",&*(vet+i));
		media+=*(vet+i);
	}
	printf("Media: %.2f\n",media/(*div));

	/* Mediana */
	if (!((*div)%2))
		pos = (int)(((*div/2)+((*div-1)/2))/2);
	else
		pos = (int)(*div/2);
	meio = *(vet+pos);
	printf("A mediana eh: %f\n",meio);

	getche();
	return 0;
}