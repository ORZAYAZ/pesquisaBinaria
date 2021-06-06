// +---------------------------------------------+
// | Pesquisa em Memória Principal | @Pedro Igor |
// +---------------------------------------------+

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
 
void mostrarMenu()
{
	printf("\n");
	printf(" +-----------------------------------+\n");
	printf(" |   Escolha uma das opções abaixo   |\n");
	printf(" | 				     |\n");
	printf(" | 1 / 2 / 3 / 4 / 5 / 6 / 7 / 8 / 9 |\n");  
	printf(" +-----------------------------------+\n");
	printf("\n");
}

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

void primeiraQ()
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
		printf(" +-----------+\n");
		printf(" | Enunciado |\n");
		printf(" +-----------+-------------------------------------+\n");
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
}

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
}

void terceiraQ()
{
	printf("\n");
	printf(" +-----------+\n");
	printf(" | Enunciado |\n");
	printf(" +-----------+---------------------------------------------------------+\n");
	printf(" | Implemente uma TAD Lista para o tipo Aluno (Matrícula e Nome), com  |\n");
	printf(" | as funcionalidades básicas de uma TAD, Implemente uma lista para    |\n");
	printf(" | a versão usando arranjos e outra para a versão usando ponteiros.    |\n");
	printf(" | Adicione a TAD as seguintes funcionalidades:                        |\n");
	printf(" | 								       |\n");
	printf(" | * Uma função PesquisaSequencial, que recebe como parâmetro o nome   |\n"); 
	printf(" | de um aluno e retorna a sua matrícula.			       |\n");
	printf(" | * Uma função PesquisaBinaria, que recebe como parâmetro a matrícula |\n");
	printf(" | de um aluno e retorne o seu nome.				       |\n");
	printf(" +---------------------------------------------------------------------+\n");
	printf("\n");
}

int main(void)
{
	mostrarMenu();
	int opcao = 0;
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
		{
			primeiraQ();
			break;
		}
		case 2:
		{
			segundaQ();
			break;
		}
		case 3:
		{
			terceiraQ();
			break;
		}
		default:
		{
			printf("\n");
			printf(" +------------------------+\n");
			printf(" | Erro, tente novamente. |\n");
			printf(" +------------------------+\n");
			printf("\n");
			break;
		}
	}	
	return 0;
}
