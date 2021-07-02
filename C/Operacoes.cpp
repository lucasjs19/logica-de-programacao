#include<stdio.h>
int dobro (int x){
	return x*2;
}

float metade (float x){
	return x/2;
}

int quadrado (int x){
	return x*x;
}

float tercap (float x){
	return x/3;
}

main()
{
	int n;
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	printf("\nDobro: %d",dobro(n));
	printf("\nMetade: %.2f",metade(n));
	printf("\nQuadrado: %d",quadrado(n));
	printf("\nTerca parte: %.2f",tercap(n));
}
