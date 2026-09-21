#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num[5], num_2[5], i, cont = 0, tot = 0, n, k, qtd = 0;

    // Entrada dos números
    for (i = 0; i < 5; i++) {
        printf("\nEntre com o número: ");
        scanf("%i", &num[i]);
    }

    // Construção do vetor num_2
    for (i = 0; i < 5; i++) {
        tot = num[i];
        n = num[1]; // sempre pega o segundo elemento do vetor num

        for (k = 1; k < n; k++) {
            tot = tot * k;
        }
        num_2[i] = tot;
    }

    // Contagens
    for (i = 0; i < 5; i++) {
        if (num_2[i] % 3 == 0) {
            cont++;
        }
        if (num_2[i] >= 20 || num_2[i] % 5 == 0) {
            qtd++;
        }
    }

    // Saída dos resultados
    printf("\nValores do vetor num_2:\n");
    for (i = 0; i < 5; i++) {
        printf("num_2[%d] = %d\n", i, num_2[i]);
    }

    printf("\nValor de cont = %d", cont);
    printf("\nValor de qtd = %d", qtd);
    printf("\nÚltimo valor de n = %d\n", n);

    return 0;
}

