#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    //Questão 1:
    int numero, positivo = 0, negativo = 0;
    do {
        printf("Entre com um valor e para encerrar digite 0: ");
        scanf_s("%d", &numero);

        if (numero > 0) {
            positivo++;
        }
        if (numero < 0) {
            negativo++;
        }

    } while (numero != 0);
    printf("Positivos: %d, Negativos: %d\n", positivo, negativo);
    printf("\n");

    //Questão 2:

    int numero1, numero2, soma = 0, subtracao = 0;

    do {
        printf("Entre com um valor positivo e encerre digitando zero: ");
        scanf_s("%d", &numero1);
        if (numero1 >= 0) {
            soma += numero1;
        }
        else {
            printf("Nao eh positivo!\n");
        }
    } while (numero1 != 0);
    printf("O valor eh: %d\n", soma);
    do {
        printf("Entre com um valor negativo e encerre digitando zero: ");
        scanf_s("%d", &numero2);
        if (numero2 <= 0) {
            subtracao -= numero2;
        }
        else {
            printf("Nao eh negativo! \n");
        }
    } while (numero2 != 0);
    printf("O valor eh: %d\n", subtracao);
    printf("\n");


    //Questão 3
    
    int par;

    do {
        printf("Entre com um numero para saber se eh par e para encerrar digite zero: ");
        scanf_s("%d", &par);

        if (par % 2 == 0) {
            printf(" %d \n",par);
        }
        else {
            printf("Nao eh par!\n");
        }


    } while (par != 0);
    printf("\n");

    //Questão 4

    int numero3, somar;

    do{

        printf("Entre com um numero para fazer a soma e para encerrar digite -1: ");
        scanf_s("%d", &numero3);

        if (num3 >= 0) {
            somar = numero3 + numero3;
        }


    } while (numero3 != -1);
    printf("A soma dos numeros eh: %d", somar);
    printf("\n");

    //Questão 5

    int numero4, total;

    do {

        printf("Digite um numero e para encerrar digite -1: ");
        scanf_s("%d", &numero4);

        if (num4 >= 5) {
            total = numero4 + numero4;
        }
        else {
            printf("Numero menor que cinco!");
        }


    } while (numero4 != -1);
    printf("A soma dos numeros maior que cinco eh: %d", total);
}


