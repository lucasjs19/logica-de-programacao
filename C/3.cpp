#include<stdio.h>
int notas(int a) // função para determinar a quantidade de notas fornecidas pelo caixa.
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
			printf("\nValor muito baixo");	//testando se o valor é valido.
		else
		if (resto!=0)
			printf("\nValor nao multiplo de 10"); // testando se o valor é valido.
		else
		if (resto==0) //única condição que o valor é válido.
		{
		tnotas = tnotas - notas(valor);
		printf("\nNotas fornecidas: %d",notas(valor)); 
		printf("\nNotas no repositorio: %d",tnotas); // atualizando a quantidade de notas no repositorio.
		}
	}while(valor>=0);
		
	
}
