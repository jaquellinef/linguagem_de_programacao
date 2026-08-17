#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("\n Digite um número: ");
	scanf ("%d", &n);
	if (n % 2 == 0){
		printf ("\n O número %d é PAR.", n);
	}else{
		printf ("\n O número %d é ÍMPAR.", n);
	}
	if (n >=0){
		printf ("\n O número %d é positivo.", n);
	}else{
		printf ("\n O número %d é negativo.", n);
	}
	if (n %5 == 0){
		printf ("\n O número %d é múltiplo de 5.", n);
	}else{
		printf ("\n O número %d não é múltiplo de 5.", n);
	}
}
