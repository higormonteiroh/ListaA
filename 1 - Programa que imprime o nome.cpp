#include <stdio.h>
#include <stdlib.h>

   main(void)
{
	char nome[100];
	
	printf("Digite seu nome:\n");
	
	scanf ("%s", &nome);
	printf ("\nO seu nome eh: %s", nome);
	printf("\n");
	system ("pause");
	return 0;
}
