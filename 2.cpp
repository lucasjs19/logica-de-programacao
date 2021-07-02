#include<stdio.h>
main()
{
	int caso,inicial,final,inc;
	printf("Para ordem ascendente (1) e para ordem descendente (2):");
	scanf("%d",&caso);
	switch (caso) // switch pro usuário informar a ordem da lista.
	{
		case 1: 
		
		printf("Valor inicial: ");
		scanf("%d",&inicial);
		printf("Valor final: ");
		scanf("%d",&final);
		printf("Incremento: ");
		scanf("%d",&inc);
		while(inicial<=final) // repetição para exibir os números de acordo com o que digitado pelo usuário.
		{
		printf("%d",inicial);
		if (inicial<final)
			printf(",");
		inicial = inicial + inc;
		}break;
		
		case 2:	//basicamente igual o case 1, só que com os valores invertidos para ser de ordem descendente.
		printf("Valor inicial: ");
		scanf("%d",&inicial);
		printf("Valor final: ");
		scanf("%d",&final);
		printf("Incremento: ");
		scanf("%d",&inc);
		while(final>=inicial)
		{
		printf("%d",final);
		if (final>inicial)
			printf(",");
		final = final - inc;
		}break;
	}
}
