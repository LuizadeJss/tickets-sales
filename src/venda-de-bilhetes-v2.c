#include <stdio.h>
#include <stdbool.h>
#include "venda-de-bilhetes.h"

int main()
{
    int idade, quantidadeBilhetes;
    
    printf("Insira a quantidade de bilhetes a serem comprados: ");
    scanf("%d", &quantidadeBilhetes);

    if(verificarQntd(quantidadeBilhetes))
    {
        printf("Insira a idade: ");
        scanf("%d", &idade);

        calcularPrecoPorIdade(idade, quantidadeBilhetes);
    }
    else
    {
        printf("A quantidade informada nao esta disponivel! \nInforme um valor entre 1 e %d", QUANTIDADE_BILHETES_MAX);
    }
    
    return 0;
}