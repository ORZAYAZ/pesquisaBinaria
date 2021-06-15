// +-------------------------------------------+-------------+
// | Pesquisa em Memória Principal - Questão 5 | @Pedro Igor |
// +-------------------------------------------+-------------+

#include <stdio.h>

int main (void)
{
	printf("\n");
	printf(" +-----------+\n");
	printf(" | Enunciado |\n");
	printf(" +-----------+-------------------------------------------------+\n");
	printf(" | A partir da árvore obtida no exercício anterior, remova os  |\n");
	printf(" | números abaixo na ordem que são apresentados. Mostre todos  |\n");
	printf(" | os passos.						       |\n");
	printf(" | 50; 20; 10; 40; 60; 30; 45; 25; 35; 55                      |\n");
	printf(" +-------------------------------------------------------------+\n");
	printf("\n");

	printf(" +---------------+\n");
	printf(" | 1° passo → 50 |\n");
	printf(" +---------------+\n");

	printf("			|			\n");
	printf("		20------55--------60		\n");
	printf("		|		  |		\n");
	printf("      10--------+-------40  x-----+		\n");
	printf("			|			\n");
	printf(" 		30------+-------45		\n");
	printf("		|				\n");
	printf("      25--------+-------35			\n");

	printf(" +---------------+\n");
	printf(" | 2° passo → 20 |\n");
	printf(" +---------------+\n");

	printf("			|			\n");
	printf("		25------55--------60		\n");
	printf("		|		  		\n");
	printf("      10--------+-------40  			\n");
	printf("			|			\n");
	printf(" 		30------+-------45		\n");
	printf("		|				\n");
	printf("       x--------+-------35			\n");

	printf(" +---------------+\n");
	printf(" | 3° passo → 10 |\n");
	printf(" +---------------+\n");

	printf("			|			\n");
	printf("		25------55--------60		\n");
	printf("		|		  		\n");
	printf("       x--------+-------40  			\n");
	printf("			|			\n");
	printf(" 		30------+-------45		\n");
	printf("		|				\n");
	printf("       		+-------35			\n");

	printf(" +---------------+\n");
	printf(" | 4° passo → 40 |\n");
	printf(" +---------------+\n");

	printf("			|			\n");
	printf("		25------55--------60		\n");
	printf("		|		  		\n");
	printf("       		+-------45  			\n");
	printf("			|			\n");
	printf(" 		30------+-------x		\n");
	printf("		|				\n");
	printf("       		+-------35			\n");

	printf(" +---------------+\n");
	printf(" | 5° passo → 60 |\n");
	printf(" +---------------+\n");

	printf("			|			\n");
	printf("		25------55-------x		\n");
	printf("		|		  		\n");
	printf("       		+-------45  			\n");
	printf("			|			\n");
	printf(" 		30------+			\n");
	printf("		|				\n");
	printf("       		+-------35			\n");

	printf(" +---------------+\n");
	printf(" | 6° passo → 30 |\n");
	printf(" +---------------+\n");

	printf("			|			\n");
	printf("		25------55			\n");
	printf("		|		  		\n");
	printf("       		+-------45  			\n");
	printf("			|			\n");
	printf(" 		35------+			\n");
	printf("		|				\n");
	printf("       		+-------x			\n");

	printf(" +---------------+\n");
	printf(" | 7° passo → 45 |\n");
	printf(" +---------------+\n");

	printf("			|			\n");
	printf("		25------55			\n");
	printf("		|		  		\n");
	printf("       		+-------35  			\n");

	printf(" +---------------+\n");
	printf(" | 8° passo → 25 |\n");
	printf(" +---------------+\n");

	printf("			|			\n");
	printf("		35------55			\n");
	printf("		|		  		\n");
	printf("       		+-------x  			\n");

	printf(" +---------------+\n");
	printf(" | 9° passo → 35 |\n");
	printf(" +---------------+\n");

	printf("			|			\n");
	printf("		x-------55			\n");

	printf(" +----------------+\n");
	printf(" | 10° passo → 55 |\n");
	printf(" +----------------+\n");

	printf("			|			\n");
	printf("			x			\n");

	return 0;
}
