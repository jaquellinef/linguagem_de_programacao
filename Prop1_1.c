//Crie um programa que receba dois numeros inteiros. Calcule:a)Acrescente mais 10 ao primeiro numero; b)Acrescente mais 5 ao segundo numero; c)Calcule o produto desses dois numeros e exiba na tela o resultado.
#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2,produto;
	printf("\nDigite o primeiro número inteiro:");
	scanf ("%d",&n1);
	printf("\n Digite o segundo número inteiro:");
	scanf("%d",&n2);
	//Fazendo a multiplicação solicitada
	produto=(n1+10)*(n2+5);
	
	//Exibindo resultados
	printf("O produto desta multiplicação é:%d\n",produto);
	return 0;
	
}.
