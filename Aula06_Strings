# 🔤 Manipulação de Strings na Linguagem C

**Instituição:** Centro Paula Souza (CPS)  
**Disciplina:** Linguagem de Programação C  
**Docente:** Profa. Andréia Rodrigues Casare ([casareandreia@gmail.com](mailto:casareandreia@gmail.com) | [andreia.casare@cps.sp.gov.br](mailto:andreia.casare@cps.sp.gov.br))  
**Última Atualização:** 09/2024  

---

## 🗺️ Mapa Mental: Manipulação de Strings em C

```mermaid
mindmap
  root((Strings em C))
    Bibliotecas Principal
      string.h
        strcmp : Comparação
        strcpy : Cópia
        strlen : Medição
        strcat : Concatenação
        strcspn : Busca / Remoção de \n
      ctype.h
        toupper : Caractere Maiúsculo
        tolower : Caractere Minúsculo
    Manipulação de Buffer
      Problema
        scanf deixa \n no buffer
        fgets lê o \n acumulado
      Soluções
        fflush(stdin) no Windows
        getchar() / fpurge
        strcspn para limpar \n do fgets
    Exercícios Práticos
      Busca de Nomes
      Contagem de Caracteres
      Substituição de Caracteres
      Verificação de Palíndromos
      Criptografia com Vogais
```

---

## 📚 1. Visão Geral das Bibliotecas

Para trabalhar com texto e caracteres na linguagem C, utilizamos duas bibliotecas principais:

* **`<string.h>`**: Contém funções específicas para vetor de caracteres (copiar, concatenar, medir, comparar).
* **`<ctype.h>`**: Contém funções para testar e converter caracteres individuais.

### 📊 Tabela Resumo das Funções de `<string.h>`

| Função | Sintaxe / Exemplo | Descrição | Retorno |
| :--- | :--- | :--- | :--- |
| **`strcmp`** | `strcmp(str1, str2)` | Compara duas strings em ordem alfabética. | `0` se iguais; `<0` se `str1 < str2`; `>0` se `str1 > str2` |
| **`strcpy`** | `strcpy(destino, origem)` | Copia o conteúdo da string `origem` para o `destino`. | Ponteiro para o destino |
| **`strlen`** | `strlen(str)` | Conta a quantidade de caracteres da string (exclui `\0`). | Número inteiro (`size_t`) |
| **`strcat`** | `strcat(dest, origem)` | Concatena (junta) a `origem` no final de `dest`. | Ponteiro para a string concatenada |
| **`strcspn`** | `strcspn(str, "\n")` | Retorna o índice da 1ª ocorrência de qualquer caractere do alvo. | Posição/Índice onde foi encontrado |
| **`strupr`** ⚠️ | `strupr(str)` | Converte toda a string para MAIÚSCULAS *(Exclusivo Windows)*. | String alterada |
| **`strlwr`** ⚠️ | `strlwr(str)` | Converte toda a string para minúsculas *(Exclusivo Windows)*. | String alterada |

---

### 📊 Tabela Resumo das Funções de `<ctype.h>`

| Função | Sintaxe / Exemplo | Descrição | Exemplo de Saída |
| :--- | :--- | :--- | :--- |
| **`toupper`** | `c = toupper(c);` | Converte **um** caractere para MAIÚSCULO. | `'a'` $\rightarrow$ `'A'` |
| **`tolower`** | `c = tolower(c);` | Converte **um** caractere para minúsculo. | `'B'` $\rightarrow$ `'b'` |

---

## 🔍 2. Detalhamento das Funções da `<string.h>`

### ⚖️ 2.1 Função `strcmp()` — Comparação de Strings

Compara caractere por caractere segundo a tabela ASCII até encontrar uma diferença ou o caractere nulo `\0`.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char msg[10], msg2[10];
    int resu;

    printf("Digite a 1ª palavra: ");
    fgets(msg, sizeof(msg), stdin);

    printf("Digite a 2ª palavra: ");
    fgets(msg2, sizeof(msg2), stdin);

    // Comparação
    resu = strcmp(msg, msg2);

    if (resu == 0) {
        printf("As strings são iguais!\n");
    } else {
        printf("As strings são diferentes!\n");
    }

    return 0;
}
```

---

### 📋 2.2 Função `strcpy()` — Cópia de Strings

Atribuição direta de strings com `=` **não funciona** em C. Deve-se utilizar `strcpy()`.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char nome1[20] = "Maria";
    char nome2[20];

    // Cópia: nome2 recebe o valor de nome1
    strcpy(nome2, nome1);

    printf("Nome copiado: %s\n", nome2); // Saída: Maria
    return 0;
}
```

---

### 📏 2.3 Função `strlen()` — Tamanho da String

Calcula o comprimento útil da string, desconsiderando o caractere terminador `\0`.

```c
#include <stdio.h>
#include <string.h>

int main() {
    int tam;
    char nome[15];

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    tam = strlen(nome);
    printf("A palavra tem %d caracteres (incluindo \\n se houver).\n", tam);

    return 0;
}
```

---

### 🔗 2.4 Função `strcat()` e O Problema do `\n` com `strcspn()`

A função `fgets()` armazena a tecla <kbd>Enter</kbd> (`\n`) na string. Ao concatenar com `strcat()`, isso provoca uma quebra de linha indesejada.

#### 💡 Solução: Remover o `\n` usando `strcspn()`

```c
#include <stdio.h>
#include <string.h>

int main() {
    char nome[30], sobrenome[15];

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);

    // Substitui o '\n' gerado pelo fgets por '\0'
    nome[strcspn(nome, "\n")] = '\0';

    // Concatenação
    strcat(nome, " ");
    strcat(nome, sobrenome);

    printf("Nome completo: %s\n", nome);
    return 0;
}
```

---

## 🔠 3. Conversão de Caixa (Maiúsculas e Minúsculas)

Para garantir compatibilidade universal (Linux, Windows, macOS), a melhor abordagem é iterar a string caractere por caractere utilizando as funções da biblioteca `<ctype.h>`.

### 🔄 Exemplo com `toupper()` e `tolower()`

```c
#include <stdio.h>
#include <ctype.h>

int main() {
    int i = 0;
    char nome[15];

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Converte para Maiúsculas
    while (nome[i] != '\0') {
        nome[i] = toupper(nome[i]);
        i++;
    }
    printf("Em maiúsculas: %s", nome);

    // Converte para Minúsculas
    i = 0;
    while (nome[i] != '\0') {
        nome[i] = tolower(nome[i]);
        i++;
    }
    printf("Em minúsculas: %s", nome);

    return 0;
}
```

---

## ⚠️ 4. Gerenciamento do Buffer de Entrada

Ao alternar o uso de `scanf()` com `fgets()`, o caractere <kbd>Enter</kbd> (`\n`) pressionado no `scanf()` permanece no **buffer de entrada**. O `fgets()` seguinte lê esse `\n` imediatamente e é "pulado".

### 🔄 Fluxo do Problema

```
1. Usuário digita idade: 25 <ENTER>
2. scanf("%d") lê: 25
3. Resta no Buffer: '\n'
4. fgets() executa -> Encontra '\n' no buffer e encerra a leitura sem esperar o usuário.
```

### 🛠️ Solução para Limpeza do Buffer

| Sistema Operacional / IDE | Comando | Descrição |
| :--- | :--- | :--- |
| **Windows / Dev-C++ / Code::Blocks** | `fflush(stdin);` | Limpa o buffer de entrada do teclado. |
| **Multiplataforma (Linux/macOS/VS Code)** | `getchar();` ou `while(getchar() != '\n');` | Consome os caracteres restantes do buffer. |

#### 💻 Exemplo Corrigido

```c
#include <stdio.h>

int main() {
    int i, idade;
    char nome[15];

    printf("Cadastro de 5 Pessoas:\n");

    for (i = 0; i < 5; i++) {
        printf("\nDigite o nome: ");
        fgets(nome, sizeof(nome), stdin);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        // Limpeza do buffer após o scanf
        while (getchar() != '\n'); // Solução universal e segura
    }

    return 0;
}
```

---

## 🏋️ 5. Exercícios Práticos Resolvidos

### 🧪 Exercício 1: Pesquisa de Nomes em Vetor

> **Enunciado:** Leia 15 nomes. Em seguida, permita pesquisas sucessivas no vetor até que seja digitada a palavra "FIM".

```c
#include <stdio.h>
#include <string.h>

int main() {
    char aNomes[15][30], busca[30];
    int i, achou;

    // Leitura dos 15 nomes
    printf("--- Cadastro de 15 Nomes ---\n");
    for (i = 0; i < 15; i++) {
        printf("Digite o %dº nome: ", i + 1);
        fgets(aNomes[i], sizeof(aNomes[i]), stdin);
        aNomes[i][strcspn(aNomes[i], "\n")] = '\0'; // Remove o \n
    }

    // Busca contínua
    while (1) {
        printf("\nDigite um nome para buscar (ou 'FIM' para sair): ");
        fgets(busca, sizeof(busca), stdin);
        busca[strcspn(busca, "\n")] = '\0';

        if (strcmp(busca, "FIM") == 0 || strcmp(busca, "fim") == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        achou = 0;
        for (i = 0; i < 15; i++) {
            if (strcmp(busca, aNomes[i]) == 0) {
                printf("✅ Nome '%s' encontrado no índice %d.\n", busca, i);
                achou = 1;
                break;
            }
        }

        if (!achou) {
            printf("❌ Nome '%s' não foi encontrado.\n", busca);
        }
    }

    return 0;
}
```

---

### 🧪 Exercício 2: Contagem de Ocorrências de um Caractere

> **Enunciado:** Leia uma string e um caractere. Mostre quantas vezes o caractere aparece na string.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char texto[100], busca;
    int i, contador = 0;

    printf("Digite uma frase/palavra: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Digite o caractere que deseja contar: ");
    scanf("%c", &busca);

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == busca) {
            contador++;
        }
    }

    printf("O caractere '%c' aparece %d vez(es) na string.\n", busca, contador);
    return 0;
}
```

---

### 🧪 Exercício 3: Substituição de Caracteres

> **Enunciado:** Receba uma string, o caractere antigo e o novo caractere. Substitua todas as ocorrências do caractere antigo pelo novo.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char texto[100], antigo, novo;
    int i;

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Digite o caractere a ser substituído: ");
    scanf(" %c", &antigo);

    printf("Digite o novo caractere: ");
    scanf(" %c", &novo);

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == antigo) {
            texto[i] = novo;
        }
    }

    printf("Resultado: %s\n", texto);
    return 0;
}
```

---

### 🧪 Exercício 4: Verificador de Palíndromos

> **Enunciado:** Verifique se uma palavra é um palíndromo (ex: RENNER, ANA, MIRIM).

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[30], invertida[30];
    int i, tam, ehPalindromo = 1;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    tam = strlen(palavra);

    // Converte para maiúsculas e compara as extremidades
    for (i = 0; i < tam / 2; i++) {
        if (toupper(palavra[i]) != toupper(palavra[tam - 1 - i])) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("✨ A palavra '%s' É um palíndromo!\n", palavra);
    } else {
        printf("⚠️ A palavra '%s' NÃO é um palíndromo.\n", palavra);
    }

    return 0;
}
```

---

### 🧪 Exercício 5: Criptografia de Vogais

> **Enunciado:** Criptografe uma frase dada pelo usuário, substituindo todas as vogais por `*`.

```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];
    int i;

    printf("Digite uma frase para criptografar: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            frase[i] = '*';
        }
    }

    printf("🔒 Frase Criptografada: %s\n", frase);
    return 0;
}
```
