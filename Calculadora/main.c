#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float divi(float a, float b);

void main()
{   setlocale(LC_ALL, "Portuguese");
    /** Crie um programa que recebe dois números inteiros digitados pelo usuário, some-os e mostre o resultado ao usuário
     * Pergunte ao usuário quais são os dois números inteiros
     * Armazene os números
     * Some os números
     * Mostre o resultado
     */

    float a, b, resultado;
    int op;
    do{
        printf("\t\tCalculadora\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n-> ");
        scanf("%d", &op);

        switch(op){
        case 1: // soma
            printf("Digite dois números:\n-> ");
            scanf("%f", &a);
            printf("-> ");
            scanf("%f", &b);
            printf("O resultado é %.2f", soma(a, b));
            printf("\n\n\n");
            break;
        case 2: // subtração
            break;
        case 3: // multiplicação
            break;
        case 4: // divisão
            break;
        case 0: //sair
            break;
        default:
            printf("Erro!");

        }
    }while(!(op == 0));

    printf("\n\n");
    system("pause");

}

float soma(float a, float b){
    return a + b;
}
float sub(float a, float b){
    return a - b;
}
float mult(float a, float b){
    return a * b;
}
float divi(float a, float b){
    return a / b;
}

