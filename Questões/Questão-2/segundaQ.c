// +-------------------------------------------+-------------+
// | Pesquisa em Memória Principal - Questão 1 | @Pedro Igor |
// +-------------------------------------------+-------------+

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void segundaQ()
{
	printf("\n");
	printf(" +-----------+\n");
	printf(" | Enunciado |\n");
	printf(" +-----------+---------------------------------------------------+\n");
	printf(" | Dado um vetor ordenado de inteiros distintos v[1,...,n],      |\n");
	printf(" | você quer descobrir se existe um índice i tal que v[i] = i.   |\n");
	printf(" | Desenvolva um algoritmo do tipo dividir para conquistar que   |\n");
	printf(" | resolva este problema e cuja complexidade idade seja O(log n).|\n");
	printf(" +---------------------------------------------------------------+\n");
	printf("\n");

	int i = 0;
	int *vetor;
	int tamanhoVetor;
	boolean check = false;

	printf("\n");
	printf(" +---------------------------+\n");
	printf(" | Digite o tamanho do vetor |\n");
	printf(" +---------------------------+\n");
	printf("\n");

	scanf("%d", &tamanhoVetor);
	vetor = (int*)malloc(sizeof(int)*tamanhoVetor);

	for(i = 0; i < tamanhoVetor; i++)
	{
		vetor[i] = i;
	}

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

		while(esquerda <= direita)
		{
			meio = (esquerda+direita/2);
			if(pesquisa == vetor[meio])
			{
				check = true;
				esquerda = ();
			}
			else if(pesquisa > vetor[meio])
			{
				esquerda = meio+1;
			}
			else
			{
				direita = meio-1;
			}
		}

		if()
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
}
