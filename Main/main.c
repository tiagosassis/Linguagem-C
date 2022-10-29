#include <stdio.h>
#include <locale.h>
#define ICMS 0.18;

void main()
{   setlocale(LC_ALL, "Portuguese");
    /** constantes
    * Constantes  são usadas para armazenar valores que NÃO podem ser alterados durante a execução do programa.
    * Uma constante deve ser declarada e para isso precisamos usar #DEFINE
    * Sintaxe: #define <nome da constante> <valor da constante>, não sendo necessário declarar o tipo.
    * Nome de constante deve sempre ser declarada com letras maiúsculas, para ser diferenciada de variáveis convencionais.
    * Uma outra forma é utilizar o modificador const, dessa forma a sintaxe muda para: const <tipo de variavel> <nome da variavel> = <valor da variavel>;

    float valor_Produto, imposto_ICMS, valor_Total;
     const float valor_Frete = 10.50;
     printf("Qual é o valor do produto?\n->");
     scanf("%f", &valor_Produto);

     imposto_ICMS = valor_Produto * ICMS;
     valor_Total = imposto_ICMS + valor_Produto + valor_Frete;

     printf("\nO valor de ICMS cobrado pelo produto é de %.2f e o valor total do produto com frete e imposto será de %.2f\n\n\n", imposto_ICMS, valor_Total);
     getchar();

    */

    /** Tipos Primitívos
    * char, int, float, double são 4 dos 6 tipos primitivos em C e C++

    char letra1 = 't';
    wchar_t letra2 = 'ç';
    printf("\nLetra com char %c e letra com wchar_t %c", letra1[0], letra2);

    */







}
