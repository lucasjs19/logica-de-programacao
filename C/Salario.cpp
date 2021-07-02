#include<stdio.h>
main()
{
	float horas, salariob,salariol,excesso;
	printf("\nHoras trabalhadas: ");
	scanf("%f", &horas);
	while(horas!=0)
	{
		if(horas>176)
	{
		excesso = horas - 176;
		salariob = (176 * 10) + (excesso * 15);
	}
	else
		salariob = horas * 10;

	salariol = salariob * 0.9;
	printf("\nSalario Bruto: %.2f",salariob);
	printf("\nSalario Liquido: %.2f",salariol);

	printf("\nHoras trabalhadas: ");
	scanf("%f", &horas);	
	}
}
