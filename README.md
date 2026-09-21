# 💻 Linguagem de Programação C

Bem-vindo ao repositório da disciplina de **Linguagem de Programação C**. Este espaço contém as anotações, estruturas de código, especificadores de formato e exercícios desenvolvidos ao longo das aulas.

---

## 👩‍🏫 Informações da Disciplina

* **Docente:** Profa. Andréia Rodrigues Casare
* **E-mails de Contato:** [casareandreia@gmail.com](mailto:casareandreia@gmail.com) | [andreia.casare@cps.sp.gov.br](mailto:andreia.casare@cps.sp.gov.br)
* **Instituição:** Centro Paula Souza (CPS)

---

## 📌 Conteúdo Programático (Aula 1)

1. **Estrutura Básica de um Programa em C**
2. **Tipos de Dados Básicos e Modificadores**
3. **Declaração de Variáveis e Constantes**
4. **Operadores (Aritméticos, Incremento/Decremento, Relacionais e Lógicos)**
5. **Entrada e Saída Padrão (`printf` e `scanf`)**
6. **Formatação de Saída e Caracteres Especiais**
7. **Suporte à Acentuação em Português (`locale.h`)**

---

## 🧱 Estrutura Básica de um Programa em C

```c
#include <stdio.h>
#include <locale.h>

// Função principal (ponto de entrada)
int main() {
    // Configura acentuação para português
    setlocale(LC_ALL, "Portuguese");

    // Comandos e lógica do programa
    printf("Olá, Mundo!\n");

    return 0;
}
```

---

## 📊 Tipos de Dados e Modificadores

| Tipo | Descrição | Tamanho Típico |
| :--- | :--- | :--- |
| `char` | Caractere individual | 1 byte |
| `int` | Número inteiro | 2 a 4 bytes |
| `float` | Ponto flutuante (precisão simples) | 4 bytes |
| `double` | Ponto flutuante (precisão dupla) | 8 bytes |
| `void` | Sem valor / vazio | 0 bytes |

> **Constantes:** Variáveis declaradas com a palavra-chave `const` não podem ter seu valor alterado durante a execução do programa (ex: `const float PI = 3.14;`).

---

## 🔤 Especificadores de Formato (`printf` / `scanf`)

| Especificador | Tipo de Dado | Descrição |
| :---: | :---: | :--- |
| `%d` ou `%i` | `int` | Inteiro decimal |
| `%f` | `float` | Ponto flutuante |
| `%lf` | `double` | Ponto flutuante de precisão dupla (para `scanf`) |
| `%c` | `char` | Caractere simples |
| `%s` | `char[]` | Cadeia de caracteres (string) |
| `%u` | `unsigned int` | Inteiro sem sinal |
| `%%` | N/A | Imprime o símbolo de porcentagem |

---

## ⚡ Operadores

### 1. Incremento e Decremento
* `++X` (Pré-incremento): Incrementa o valor de `X` **antes** de avaliar a expressão.
* `X++` (Pós-incremento): Avalia a expressão com o valor atual de `X` e **depois** incrementa.
* `--X` / `X--`: Análogo para decremento.

### 2. Relacionais e Lógicos
* **Relacionais:** `==` (Igual), `!=` (Diferente), `>`, `<`, `>=`, `<=`
* **Lógicos:** `&&` (E / AND), `||` (OU / OR), `!` (NÃO / NOT)

---

## 📝 Exemplos de Código da Aula

### Exemplo 1: Cálculo de Média Escolar
```c
#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("\n Digite a nota 1: ");
    scanf("%f", &n1);

    printf("\n Digite a nota 2: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("\n A média é: %.2f\n", media);

    return 0;
}
```

### Exemplo 2: Reajuste Salarial (Aumento de 25%)
```c
#include <stdio.h>

int main() {
    float sal, novosal;

    printf("\n Digite o salário: ");
    scanf("%f", &sal);

    novosal = sal + (sal * 25 / 100);

    printf("\n Novo salário: %.2f\n", novosal);

    return 0;
}
```

---

## 🛠️ Exercício Proposto

**Enunciado:**
Crie um programa que receba dois números inteiros. Calcule e exiba:
1. Acrescente `10` ao primeiro número.
2. Acrescente `5` ao segundo número.
3. Calcule o produto (multiplicação) desses dois novos números e exiba o resultado na tela.

---

## 🚀 Como Compilar e Executar

Caso esteja utilizando o **GCC** via terminal:

```bash
# Compilar o arquivo
gcc -o programa exercicio.c

# Executar no Linux/macOS
./programa

# Executar no Windows
programa.exe
```
