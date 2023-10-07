#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char produto[50];
    float compra;
}Mercadoria;


int main () {

    Mercadoria preco;
    float venda;

    printf ("Nome do produto: ");
    scanf ("%s", preco.produto);

    printf ("Preco de compra R$");
    scanf ("%f", &preco.compra);

    venda = (preco.compra*0.25)+preco.compra;

    printf ("\n\nProduto ---> %s\nPreco de compra ---> R$%.2f\nPreco de venda ---> R$%.2f\n\n", preco.produto, preco.compra, venda);
}