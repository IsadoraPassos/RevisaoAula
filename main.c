#include <stdio.h>
#include <stdlib.h>

float lerValor(){
    float valor;
    printf("\nDigite o valor: ");
    scanf("%f", &valor);
    return valor;
}

float soma(){
    float valor1, valor2, resultado;
    valor1 = lerValor();
    valor2 = lerValor();
    resultado = valor1 + valor2;
    return resultado;
}

float subtracao(){
    float valor1, valor2, resultado;
    valor1 = lerValor();
    valor2 = lerValor();
    resultado = valor1 - valor2;
    return resultado;
}

float multiplicacao(){
    float valor1, valor2, resultado;
    valor1 = lerValor();
    valor2 = lerValor();
    resultado = valor1 * valor2;
    return resultado;
}

int main(){

    return 0;
}
