#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main() {
    char texto[100];
    char caractere;
    int i, contador = 0;

    // Leitura da string (aceita espaços)
    printf("Digite uma palavra ou frase: ");
    scanf(" %[^\n]", texto);

    // Leitura do caractere
    printf("Digite o caractere a ser contado: ");
    scanf(" %c", &caractere);

    // Percorre a string e conta as ocorrências
    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == caractere) {
            contador++;
        }
    }

    // Exibe o resultado
    printf("\nO caractere '%c' aparece %d vez(es) na frase digitada.\n", caractere, contador);

    return 0;
}
