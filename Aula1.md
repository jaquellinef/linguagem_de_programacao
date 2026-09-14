# 📘 Aula 1: Introdução à Linguagem C

**Professora:** Andréia Rodrigues Casare  
**E-mail:** casareandreia@gmail.com | andreia.casare@cps.sp.gov.br  

---

## 🏗️ Estrutura básica de um programa C
```c
tipo_dado função main(lista de parâmetros) {
    declarações de variáveis/constantes locais;
    comandos;
    estruturas de controle;
    comentários;
    chamada de funções;
}

tipo_dado função1(lista de parâmetros) {
    Bloco de comandos;
}
## Comentários
// → comentário de linha

/* ... */ → comentário de bloco

## 🔢 Tipos básicos de dados
char → caractere

int → inteiro

float → ponto flutuante

double → ponto flutuante de precisão dupla

void → sem valor

## Operadores
+ soma

- subtração

* multiplicação

/ divisão

% resto da divisão

## Incremento e Decremento
++x;   // pré-incremento
x++;   // pós-incremento
--x;   // pré-decremento
x--;   // pós-decremento

## 🔗 Operadores relacionais
== igual

> maior

< menor

>= maior ou igual

<= menor ou igual

!= diferente

##⚙️ Operadores lógicos
&& → AND

|| → OR

! → NOT

##🖥️ Entrada e Saída
printf()
printf("A média é: %.2f", media);
scanf()
scanf("%f", &n1);

##🎨 Impressão de códigos especiais
\n → nova linha

\t → tabulação

\b → retrocesso

\f → nova página

\a → beep sonoro

\" → aspas

\\ → barra invertida

%% → símbolo %

##🔧 Casas decimais
printf("Default: %f \n", 3.1415169265);
printf("Uma casa: %.1f \n", 3.1415169265);
printf("Duas casas: %.2f \n", 3.1415169265);
printf("Três casas: %.3f \n", 3.1415169265);
printf("Notação Científica: %e \n", 3.1415169265);

##🏁 Função main
int main() {
    printf("olá mundo");
}

##🇧🇷 Acentuação
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("olá mundo !! ");
    printf("ç é â");
    return 0;
}

