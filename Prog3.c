#include <stdio.h>

int main() {

escolhaOpcao();

return 0;
}

// Variaveis globais //

const double USD = 1.12;
const double CAD = 1.45;


int escolha;
double valor;
double resultado;

///////////////////////

// Função para fazer a escolha //

escolhaOpcao() {

    printf("Escolha uma das opcoes para fazer a conversão:\n\n1 - Euro - USD Dollar\n\n2 - USD Dollar - Euro\n\n3 - Euro - CAD\n\n4 - CAD - Euro\n\nEscolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            escolha1();
            break;
        case 2:
            escolha2();
            break;
        case 3:
            escolha3();
            break;
        case 4:
            escolha4();
            break;
        default: 
            printf("Opção invalida, obrigado!\n");
            break;
    }


return escolhaOpcao;
}

///////////////////////

// Euro - USD Dollar //

intrValor() {

    printf("Introduza o valor para ser convertido: ");
    scanf(" %lf", &valor);

return intrValor;
}

escolha1() {

    intrValor();

    resultado = valor * USD;

    printf("Valor da conversão: %0.2f USD Dollar\n", resultado);


return escolha1;
}

///////////////////////

// USD Dollar - Euro //

escolha2() {

    intrValor();

    resultado = valor * 0.89;

    printf("Valor da conversão: %0.2lf Euros\n", resultado);

return escolha2;
}

////////////////

// Euro - CAD //

escolha3() {

    intrValor();

    resultado = valor * CAD;

    printf("Valor da conversão: %0.2lf CAD\n", resultado);

return escolha3;
}

////////////////

// CAD - EURO //

escolha4() {

    intrValor();

    resultado = valor * 0.69;

    printf("Valor da conversão: %0.2lf Euros\n", resultado);

return escolha4;
}

////////////////