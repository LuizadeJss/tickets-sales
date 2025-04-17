/*ARQUIVO VENDA-DE-BILHETES.H*/
const int QUANTIDADE_BILHETES_MAX = 5;
const int VALOR_INGRESSO = 30;

//Verificação de Quantidade de Bilhetes por pessoa: chamada
bool verificarQntd(int quantidadeBilhetes);

//Verificação de Quantidade de Bilhetes por pessoa: implementação
bool verificarQntd(int quantidadeBilhetes)
{
    if(quantidadeBilhetes <= 0 || quantidadeBilhetes > QUANTIDADE_BILHETES_MAX)
        return false;
    else
        return true;
}

//Calculo do preço por idade: chamada
void calcularPrecoPorIdade(int idade, int quantidadeBilhetes);

//Calculo do preço por idade: implementacao
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