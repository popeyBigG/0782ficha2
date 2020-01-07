#include <stdio.h>

// Variaveis globais //

int num1, num2;
int soma, maior;

///////////////////////

int main() {

    // Input para determinar os 2 números inteiros //

    pergunta();

    //////////////////////////////////////////////////

    // Fazer os calculos/comparações //

    calcs();

    //////////////////////////////////////////////////

return 0;
}

void pergunta() {

    printf("Insira um número inteiro: ");
    scanf("%d", &num1);

    printf("\nInsira outro número inteiro: ");
    scanf(" %d", &num2);
}   

void calcs() {

    // Fazer a soma dos 2 numeros //
    soma = (num1 + num2);


    // Determinar qual o maior // 
    if (num1 > num2) {

        maior = num1;

        printf("\nSoma = %d\nMaior: %d\n", soma, maior);

    } else if (num1 < num2) {

        maior = num2;

        printf("\nSoma = %d\nMaior: %d\n", soma, maior);

    } else {
        
        printf("\nSoma = %d\nAmbos os valores são iguais\n", soma);

    }

}
