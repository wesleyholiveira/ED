#ifndef AULAS_H
#define AULAS_H
/*
*	Retorna a quantidade de elementos de um vetor
*	@param {void *nums}		- O vetor de destino
*	@param {size_t size}	- O tamanho do vetor
*/
int count(void *nums,size_t size);
/*
*	Retorna a média aritmética de todos os elementos de um vetor
*	@param {float *nums}	- O vetor que contem os dados a serem calculados
*	@param {size_t size}	- O tamanho do vetor
*/
float media(float *nums,size_t size);
/*
*	Retorna a mediana dos elementos de um vetor
*	@param {float *nums}	- O vetor que contem os dados a serem calculados
*	@param {size_t size}	- O tamanho do vetor
*/
float mediana(float *nums,size_t size);
#endif