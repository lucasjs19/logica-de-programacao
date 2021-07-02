#include<stdio.h>
main()
{
	int n,i=0;
	printf("Informe o numero: ");
	scanf("%d", &n);
	while(i<n){
		if (n%2==1)
		printf("%d ",n);
		n=n-1;
	}
	
}
