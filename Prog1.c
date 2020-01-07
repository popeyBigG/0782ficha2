#include <stdio.h>

//Variaveis globais//

const double libra = 2.2;

/////////////////////



//Função main//
int main() {

escolhaOpcao();

return 0;
}
///////////////



                        //Função para que seja feita a escolha da unidade de conversão//
void escolhaOpcao() {
    //Variaveis//
    int escolha;

    printf("Escolha uma das opções abaixo inserindo a opção correspondente: \n\n1 - Quilogramas > Libras\tOutro número - Libras > Quilogramas\n\nEscolha: ");
    scanf("%d", &escolha);

    switch (escolha) {

        case 1: 
            opcao1();
        break;
        default: 
            opcao2();
        break;

    }
}
                                            //////////////////////


//Funções para as unidades//

void opcao1() {
    //Variaveis//
    double valor1;
    double resultado1;

    //Input para o valor a ser convertido//
    printf("\nInsira o valor em Quilogramas: ");
    scanf(" %lf", &valor1);

    //Calculo de conversao//
    resultado1 = (valor1 * libra);

    //Output final//
    printf("%2.lf Quilogramas em Libras é: %2.lf lb\n", valor1, resultado1);

}

void opcao2() {
    //Variaveis//
    double valor2;
    double resultado2;

    //Input para o valor a ser convertido//
    printf("\nInsira o valor em Libras: ");
    scanf(" %lf", &valor2);

    //Calculo de conversao//
    resultado2 = (valor2 / libra);

    //Output final//
    printf("%2.lf Libras em Quilogramas é: %2.lf Kg\n", valor2, resultado2);

}