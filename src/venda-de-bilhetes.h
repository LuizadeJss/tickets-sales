/*ARQUIVO VENDA-DE-BILHETES.H*/
#include <stdbool.h>

const int QUANTIDADE_BILHETES_MAX = 5;
const int VALOR_INGRESSO = 30;

//Verificação de Quantidade de Bilhetes por pessoa: chamada
int verificarQntd(int quantidadeBilhetes);

//Verificação de Quantidade de Bilhetes por pessoa: implementação
int verificarQntd(int quantidadeBilhetes)
{
    if(quantidadeBilhetes <= 0 || quantidadeBilhetes > QUANTIDADE_BILHETES_MAX)
        return -1;
    else
        return 1;
}

//Calculo do preço por idade: chamada
double calcularPrecoPorIdade(int idade, int quantidadeBilhetes);

//Calculo do preço por idade: implementacao
double calcularPrecoPorIdade(int idade, int quantidadeBilhetes)
{
    if(idade > 0 && idade <= 12)
    {
        return ((VALOR_INGRESSO - 20) * quantidadeBilhetes);
    }
    
    else if(idade > 12 && idade <= 59)
    {
        return VALOR_INGRESSO * quantidadeBilhetes;
    }
    
    else if(idade > 59 && idade <= 200)
    {
        return (VALOR_INGRESSO - 15) * quantidadeBilhetes;
    }
    else
        return -1;
    

}