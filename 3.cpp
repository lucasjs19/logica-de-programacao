#include<stdio.h>
int notas(int a) // fun��o para determinar a quantidade de notas fornecidas pelo caixa.
{
	return a/10;
}

main()
{
	int valor,resto,tnotas=1000;
	do
	{
		printf("\nValor: ");
		scanf("%d",&valor);
		if(valor<0)
		break;
		resto = valor % 10;
		if (valor<10)
			printf("\nValor muito baixo");	//testando se o valor � valido.
		else
		if (resto!=0)
			printf("\nValor nao multiplo de 10"); // testando se o valor � valido.
		else
		if (resto==0) //�nica condi��o que o valor � v�lido.
		{
		tnotas = tnotas - notas(valor);
		printf("\nNotas fornecidas: %d",notas(valor)); 
		printf("\nNotas no repositorio: %d",tnotas); // atualizando a quantidade de notas no repositorio.
		}
	}while(valor>=0);
		
	
}
