#include <stdio.h>
#include "venda-de-bilhetes.h"

int main()
{
    int idade, quantidadeBilhetes;
    
    printf("Insira a quantidade de bilhetes a serem comprados: ");
    scanf("%d", &quantidadeBilhetes);

    if(verificarQntd(quantidadeBilhetes) != -1)
    {
        printf("Insira a idade: ");
        scanf("%d", &idade);

        double preco = calcularPrecoPorIdade(idade, quantidadeBilhetes);
       
        if(preco != -1 )
            printf("O valor total dos ingressos e de: R$: %2.f", preco);
        else
            printf("Idade Invalida!");
    }
    else
        printf("A quantidade informada nao esta disponivel! \nInforme um valor entre 1 e %d", QUANTIDADE_BILHETES_MAX);
    
    return 0;   
}