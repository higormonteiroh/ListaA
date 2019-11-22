#include <stdio.h>
#include <stdlib.h>

main(void)
{	
	char nome[100], idade [2];
	
	printf("Digite seu Nome: \n");
	 scanf("%s" , &nome);
	
	printf("\n");
	
	printf("Digite sua Idade: \n");
	 scanf("%s" , &idade);
	 
	printf("\n");
	 
	printf("\nO seu nome eh: %s", nome);
	printf("\n");
	printf("A sua idade eh: %s", idade);
	printf("\n");
	
	system("pause");
	return 0;
}



