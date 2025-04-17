#include <stdio.h>
#include <stdbool.h>

const int QUANTIDADE_BILHETES_MAX = 5;
const int VALOR_INGRESSO = 30;

bool verificarQntd(int quantidadeBilhetes)
{
    if(quantidadeBilhetes <= 0 || quantidadeBilhetes > QUANTIDADE_BILHETES_MAX)
        return false;
    else
        return true;
}

void calcularPrecoPorIdade(int idade, int quantidadeBilhetes)
{
    float preco;

    if(idade > 0 && idade <= 12)
    {
        preco = ((VALOR_INGRESSO - 20) * quantidadeBilhetes);
        printf("O valor total dos ingressos e de: R$: %2.f", preco);
    }
    
    else if(idade > 12 && idade <= 59)
    {
        preco = VALOR_INGRESSO * quantidadeBilhetes;
        printf("O valor total dos ingressos e de: R$: %2.f", preco);
    }
    
    else if(idade > 59 && idade <= 200)
    {
        preco = (VALOR_INGRESSO - 15) * quantidadeBilhetes;
        printf("O valor total dos ingressos e de: R$: %2.f", preco);
    }
    
    else
        printf("A idade informada e invalida!");
}

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