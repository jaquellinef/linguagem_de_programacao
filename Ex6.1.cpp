#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	
    char nomes[15][50];
    char busca[50];
    int i, j, encontrado;

    // Leitura dos 15 nomes
    printf("=== CADASTRO DE NOMES ===\n");
    for (i = 0; i < 15; i++) {
        printf("Digite o %dº nome: ", i + 1);
        scanf(" %[^\n]", nomes[i]);

        // Converte o nome digitado para maiúsculo
        for (j = 0; nomes[i][j] != '\0'; j++) {
            nomes[i][j] = toupper(nomes[i][j]);
        }
    }

    // Loop de busca
    printf("\n=== BUSCA DE NOMES ===\n");
    while (1) {
        printf("\nDigite um nome para pesquisar (ou FIM para sair): ");
        scanf(" %[^\n]", busca);

        // Converte o termo de busca para maiúsculo
        for (j = 0; busca[j] != '\0'; j++) {
            busca[j] = toupper(busca[j]);
        }

        // Condição de parada
        if (strcmp(busca, "FIM") == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        // Pesquisa linear no vetor
        encontrado = 0;
        for (i = 0; i < 15; i++) {
            if (strcmp(nomes[i], busca) == 0) {
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            printf("O nome '%s' FOI encontrado no vetor!\n", busca);
        } else {
            printf("O nome '%s' NAO foi encontrado.\n", busca);
        }
    }

    return 0;
}
