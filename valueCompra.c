#include <stdio.h>
main() {
    float preco_compra, preco_final;
    printf("Digite o valor da compra: ");
    scanf("%f", &preco_compra);
    preco_final=preco_compra - preco_compra*15/100;
    printf("Preco final = %f ",preco_final);
}