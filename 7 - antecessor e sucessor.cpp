#include <stdio.h>
#include <stdlib.h>

 int main(void)

{
	float n;
	printf("Digite o numero: ");
	scanf("%f", &n);
	printf("Antecessor: %2.f e sucessor: %2.f", n-1, n+1);
    
	system ("Pause");
	return 0;
}


