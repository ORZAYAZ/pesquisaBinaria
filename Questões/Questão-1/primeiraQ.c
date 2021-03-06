// +-------------------------------------------+-------------+
// | Pesquisa em Memória Principal - Questão 1 | @Pedro Igor |
// +-------------------------------------------+-------------+

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int  binariaRecursiva(int vetor[],int pesquisa, int direita, int esquerda)
{
	if(esquerda > direita)
	{
		return false;
	}
	else
	{
		int meio = (esquerda+direita/2);
		if(pesquisa == vetor[meio])
		{
			return true;
		}
		else if(pesquisa < vetor[meio])
		{
			return binariaRecursiva(vetor, pesquisa, meio-1, esquerda);
		}
		else
		{
			return binariaRecursiva(vetor, pesquisa, direita, meio-1);
		}
	}
}

int main (void)
{
	printf("\n");
	printf(" +----------------------------------------------------------+\n");
	printf(" | Implemente uma versão recursiva para a pesquisa Binária. |\n");
	printf(" +----------------------------------------------------------+\n");
	printf("\n");

	int i;
	int *vetor;
	int pesquisa;
	int tamanhoVetor;

	printf("\n");
	printf(" +---------------------------+\n");
	printf(" | Digite o tamanho do vetor |\n");
	printf(" +---------------------------+\n");
	printf("\n");

	scanf("%d", &tamanhoVetor);
	vetor = (int*)malloc(sizeof(int)*tamanhoVetor);

	if(vetor == NULL)
	{
		printf("\n");
		printf(" +------------------------+\n");
		printf(" | Erro ao alocar o vetor |\n");
		printf(" +------------------------+\n");
		printf("\n");
		exit(0);
	}
	else
	{
		for(i = 0; i < tamanhoVetor; i++)
		{
			vetor[i] = rand()%11;
		}

		printf("\n");
		printf(" +-------------------------------------------------+\n");
		printf(" | Digite o elemento que deseja pesquisar no vetor |\n");
		printf(" +-------------------------------------------------+\n");
		printf("\n");

		scanf("%d", &pesquisa);

		if(binariaRecursiva(vetor, pesquisa, tamanhoVetor, 0))
		{
			printf("\n");
			printf(" +-----------------+\n");
			printf(" | %-2d - Encontrado |\n", pesquisa);
			printf(" +-----------------+\n");
			printf("\n");
		}
		else
		{
			printf("\n");
			printf(" +---------------------+\n");
			printf(" | %-2d - Não encontrado |\n", pesquisa);
			printf(" +---------------------+\n");
			printf("\n");
		}
	}
	return 0;
}
