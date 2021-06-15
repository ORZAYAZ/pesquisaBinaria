// +-------------------------------------------+-------------+
// | Pesquisa em Memória Principal - Questão 6 | @Pedro Igor |
// +-------------------------------------------+-------------+

#include <stdio.h>

int main (void)
{
	printf("\n");
        printf(" +-----------+\n");
        printf(" | Enunciado |\n");
        printf(" +-----------+-------------------------------------------------------+\n");
	printf(" | Análise a árvore gerada na questão 4 e responda:	             |\n");
	printf(" | a) Qual o custo para se pesquisar o valor 25 na árvore? Explique. |\n");
	printf(" | b) Qual o custo para se pesquisar o valor 25 se usássemos uma     |\n");
	printf(" | estrutura de pesquisa sequencial. Explique.			     |\n");
	printf(" | c) Qual o custo para se pesquisar o valor 25 se usássemos uma     |\n");
	printf(" | estrutura de pesquisa binária. Explique.			     |\n");
        printf(" +-------------------------------------------------------------------+\n");
        printf("\n");

	printf(" +-------------------------------------------+\n");
	printf(" | Escolha a letra desejada: 'a' / 'b' / 'c' |\n");
	printf(" +-------------------------------------------+\n");

	char questao;
	scanf("%c", &questao);

	switch(questao)
	{
		case 'a':
		{
			printf("\n");
			printf(" +-----------------------------------------+\n");
			printf(" | O custo para se pesquisar o valor 25    |\n");
			printf(" | seria O(n), devido ao fato de que       |\n");
			printf(" | quando pesquisa um item que se encontra |\n");
			printf(" | no final da árvore (folha).		   |\n");
			printf(" +-----------------------------------------+\n");
			break;
		}
		case 'b':
		{
			printf("\n");
			printf(" +-------------------------------------------+\n");
			printf(" | O custo para se pesquisar o valor 25 se   |\n");
			printf(" | utilizando da pesquisa sequencial seria   |\n");
			printf(" | Θ(n), isso porque se encontra no pior caso|\n");
			printf(" | , já que o item está no final da árvore.  |\n");
			printf(" +-------------------------------------------+\n");
			break;
		}
		case 'c':
		{
			printf("\n");
			printf(" +-------------------------------------------+\n");
			printf(" | O custo para se pesquisar o valor 25 se   |\n");
			printf(" | utilizando da pesquisa binária seria      |\n");
			printf(" | Θ(log n), isso porque se encontra no pior |\n");
			printf(" | caso , já que o item está no final da     |\n");
			printf(" | árvore.				     |\n");
			printf(" +-------------------------------------------+\n");
			break;
		}
		default:
		{
			printf(" +-----------------------+\n");
			printf(" | Erro, tente novamente |\n");
			printf(" +-----------------------+\n");
			break;
		}
	}
	return 0;
}
