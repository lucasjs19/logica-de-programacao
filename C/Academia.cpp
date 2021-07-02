#include<stdio.h>
main()
{
	//IDADE NEGATIVA PARA SAIR DO LOOP
	char sexo;
	int idade, pratica,m=0,f=0,soma=0,musc=0,corr=0,fot=0,maior=0;
	float media=0,percm=0,percf=0;
	do{
		
	printf("\nIdade:");
	scanf("%d",&idade);
	if (idade<0)
	break;
	soma = soma + idade;

	printf("\nSexo (M-Masculino e F-Feminino)");
	scanf(" %c", &sexo);
	
	if (sexo=='M' || sexo == 'm')
	m++;
	else
	if (sexo=='F' || sexo=='f')
	f++;
	
	printf("\nPratica preferida (1-Musculacao, 2-Corrida, 3-Fotos no espelho)");
	scanf("%d",&pratica);
	
	if(pratica==1)
		musc++;
	else
	if(pratica==2)
		corr++;
	else
	if(pratica==3)
		fot++;
	}while(idade>=0);
	
	media = soma/(m+f);
	printf("\nIdade media: %.2f",media);
	percm = m*100/(m+f);
	printf("\nPorcentagem de homens: %.2f", percm);
	percf = f*100/(m+f);
	printf("\nPorcentagem de mulheres: %.2f", percf);
	
	if(musc>corr && musc>fot)
			printf("\nAtividade de maior prática dos alunos: Musculacao");
	else 
	if(corr>musc && corr>fot)
		printf("\nAtividade de maior prática dos alunos: Corrida");
	else
	if(fot>musc && fot>corr)
		printf("\nAtividade de maior prática dos alunos: Fotos no espelho");
	
}
