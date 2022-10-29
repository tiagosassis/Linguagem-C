#include <stdio.h>
#include <locale.h>
#define ICMS 0.18;

void main()
{   setlocale(LC_ALL, "Portuguese");
    /** constantes
    * Constantes  s�o usadas para armazenar valores que N�O podem ser alterados durante a execu��o do programa.
    * Uma constante deve ser declarada e para isso precisamos usar #DEFINE
    * Sintaxe: #define <nome da constante> <valor da constante>, n�o sendo necess�rio declarar o tipo.
    * Nome de constante deve sempre ser declarada com letras mai�sculas, para ser diferenciada de vari�veis convencionais.
    * Uma outra forma � utilizar o modificador const, dessa forma a sintaxe muda para: const <tipo de variavel> <nome da variavel> = <valor da variavel>;

    float valor_Produto, imposto_ICMS, valor_Total;
     const float valor_Frete = 10.50;
     printf("Qual � o valor do produto?\n->");
     scanf("%f", &valor_Produto);

     imposto_ICMS = valor_Produto * ICMS;
     valor_Total = imposto_ICMS + valor_Produto + valor_Frete;

     printf("\nO valor de ICMS cobrado pelo produto � de %.2f e o valor total do produto com frete e imposto ser� de %.2f\n\n\n", imposto_ICMS, valor_Total);
     getchar();

    */

    /** Tipos Primit�vos
    * char, int, float, double s�o 4 dos 6 tipos primitivos em C e C++

    char letra1 = 't';
    wchar_t letra2 = '�';
    printf("\nLetra com char %c e letra com wchar_t %c", letra1[0], letra2);

    */







}
