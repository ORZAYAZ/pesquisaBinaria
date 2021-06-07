// +-------------------------------------------+-------------+
// | Pesquisa em Memória Principal - Questão 3 | @Pedro Igor |
// +-------------------------------------------+-------------+

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct aluno
{
	int matricula;
	char nomeAluno[30];
}

typedef struct filaAluno
{
	Celula *Inicio;
	Celula *fim;
	int tamanho;
}
filaAlunoAluno;

void imprimirFim()
{
	printf("\n");
	printf("  +-----------------+\n");
	printf("  | fim do programa |\n");
	printf("  +-----------------+\n");
	printf("\n");
}

void imprimirMenu()
{
	printf("\n");
	printf(" +------+\n");
	printf(" | Menu |\n");
	printf(" +------+----------------------------------------+\n");
	printf(" |          Escolha uma das opções abaixo        |\n");
	printf(" +-----------------------------------------------+\n");
	printf(" | 0 → Sair do progroma			 				 |\n");
	printf(" | 1 → Cadastrar aluno           				 |\n");
	printf(" | 2 → Exibir lista completa     				 |\n");
	printf(" | 3 → Remover aluno 			 				 |\n");
	printf(" | 4 → Pesquisar utilizando o nome do aluno 	 |\n");
	printf(" | 4 → Pesquisar utilizando a matrícula do aluno |\n");
	printf(" +-----------------------------------------------+\n");
	printf("\n");
}

void imprimirErro()
{
	printf("\n");
	printf("  +----------------------------------+\n");
	printf("  | Opção inválida, tente novamente. |\n");  
	printf("  +----------------------------------+\n");
	printf("\n");
}

void imprimirReiniciar()
{
	printf("  +-------------------------+\n");
	printf("  |  Deseja voltar ao menu  |\n");  
	printf("  +-------------------------+\n");
	printf("  |    1 - Sim | 0 - Não    |\n");
	printf("  +-------------------------+\n");
	printf("\n");
}

void imprimirEnunciado()
{
	printf("\n");
	printf(" +-----------+\n");
	printf(" | Enunciado |\n");
	printf(" +-----------+---------------------------------------------------------+\n");
	printf(" | Implemente uma TAD Lista para o tipo Aluno (Matrícula e Nome), com  |\n");
	printf(" | as funcionalidades básicas de uma TAD, Implemente uma lista para    |\n");
	printf(" | a versão usando arranjos e outra para a versão usando ponteiros.    |\n");
	printf(" | Adicione a TAD as seguintes funcionalidades:                        |\n");
	printf(" | 								       								   |\n");
	printf(" | * Uma função PesquisaSequencial, que recebe como parâmetro o nome   |\n");
	printf(" | de um aluno e retorna a sua matrícula.			       			   |\n");
	printf(" | * Uma função PesquisaBinaria, que recebe como parâmetro a matrícula |\n");
	printf(" | de um aluno e retorne o seu nome.				       			   |\n");
	printf(" +---------------------------------------------------------------------+\n");
	printf("\n");
}

Celula *novaCelula() 
{
  Celula *aux = (Celula*)malloc(sizeof(Celula));
  aux->proximo = NULL;  
  return aux;
}

void novafilaAluno (filaAluno *F) 
{
  Celula *nova = novaCelula();
  F->Inicio = nova;
  F->fim = nova;
  F->tamanho = 0;
}

void cadastrarAluno (filaAluno *F, aluno *A) 
{
  Celula *nova = novaCelula();  
  nova->dado = *P;  
  F->fim->proximo = nova;
  F->fim = nova;
  F->tamanho++;
}

void removerAluno(filaAluno *F, int Pos)
{
	Celula *anterior = F->inicio;
	Celula *auxiliar = F->inicio->prox;
	
	while(auxiliar!=NULL && Pos > 0)
	{
		anterior = anterior->prox;
		auxiliar = anterior->prox;
		Pos--;
	}
	
	if(auxiliar!=NULL)
	{
		anterior->prox = auxiliar->prox;
		free(auxiliar);	
		auxiliar = NULL;
		
		if(anterior->prox == NULL)
		{
			F->fim = anterior;
		}
		
		F->tam--;
	}
}

void imprimirAluno(aluno A)
{
	printf(" | %-30s| %-8d|\n");
}

void imprimirFila(filaAluno *F)
{
	if(F->tamanho == 0)
	{
		printf("\n");
		printf("  +------------------------------+\n");
		printf("  | Fila vazia, tente novamente. |\n");  
		printf("  +------------------------------+\n");
		printf("\n");
	}
	else
	{
		printf("\n");
		printf(" +-------------------------------+----------------------+\n");
		printf(" | 				Nome			 | 		Matrícula		|\n");
		printf(" +-------------------------------+----------------------+\n");
		
		int i = 0;
		while(i < F->tamanho)
		{
			imprimeAluno(F->filaAluno[i]);
			i++;
		}
		printf(" +-------------------------------+----------------------+\n");
		printf("\n");
	}
}
