// +-------------------------------------------+-------------+
// | Pesquisa em Memória Principal - Questão 3 | @Pedro Igor |
// +-------------------------------------------+-------------+

#include "terceiraQ.h"

void menu(filaAluno *F)
{
	char auxiliar;
	int escolha = 0;
	scanf("%d", &escolha);
	
	switch(escolha)
	{
		case 0:
		{
			exit(0);
			break;
		}
		case 1:
		{
			aluno A;
			
			printf("\n");
			printf("  +---------------------------------------+\n");
			printf("  |   Cadastrar uma nova pessoa na fila   |\n");
			printf("  +---------------------------------------+\n");	
			printf("\n");
			
			printf("Digite o nome do aluno: ");
			scanf("%c",&auxiliar);
			scanf("%[^\n]",A.nomeAluno);
			
			printf("Digite a matrícula do aluno: ");
			scanf("d", &A.matricula);
			
			cadastrarAluno(F, &A);
			
			imprimirReiniciar();
			scanf("%d", &Voltar);
			if(Voltar == 1)
			{
				menu(FilaGeral);
			}
			else
			{
				imprimirFim();
				exit(0);
			}
			break;
		}
		case 2:
		{
			imprimirFila(&F);
			imprimirReiniciar();
			scanf("%d", &Voltar);
			if(Voltar == 1)
			{
				menu(FilaGeral);
			}
			else
			{
				imprimirFim();
				exit(0);
			}
			break;
		}
		case 3:
		{
			printf("Digite o nome do aluno: ");
			scanf("%c",&auxiliar);
			scanf("%[^\n]",A.nomeAluno);
			break;
		}
		case 4:
		{
			printf("Digite a matrícula do aluno: ");
			scanf("d", &A.matricula);
			break;
		}
		default:
		{
			imprimirErro();
			imprimirReiniciar();
			scanf("%d", &Voltar);
			if(Voltar == 1)
			{
				menu(FilaGeral);
			}
			else
			{
				imprimirFim();
				exit(0);
			}
			break;
		}
	}
}

int main (void)
{
	imprimirEnunciado();
	imprimirMenu();
	
	filaAluno F;
	novafilaAluno(&F);
	
	menu(&F);
	return 0;
}
