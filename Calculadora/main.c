#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float divi(float a, float b);

void main()
{   setlocale(LC_ALL, "Portuguese");
    /** Crie um programa que recebe dois n�meros inteiros digitados pelo usu�rio, some-os e mostre o resultado ao usu�rio
     * Pergunte ao usu�rio quais s�o os dois n�meros inteiros
     * Armazene os n�meros
     * Some os n�meros
     * Mostre o resultado
     */

    float a, b, resultado;
    int op;
    do{
        printf("\t\tCalculadora\n");
        printf("1 - Soma\n");
        printf("2 - Subtra��o\n");
        printf("3 - Multiplica��o\n");
        printf("4 - Divis�o\n");
        printf("0 - Sair\n-> ");
        scanf("%d", &op);

        switch(op){
        case 1: // soma
            printf("Digite dois n�meros:\n-> ");
            scanf("%f", &a);
            printf("-> ");
            scanf("%f", &b);
            printf("O resultado � %.2f", soma(a, b));
            printf("\n\n\n");
            break;
        case 2: // subtra��o
            break;
        case 3: // multiplica��o
            break;
        case 4: // divis�o
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

