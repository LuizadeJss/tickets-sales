#include "minunit-master/minunit.h"
#include "../src/venda-de-bilhetes.h"


//Teste 1: Verifica se o tratamento para qntd de tikets está funcionando corretamente
MU_TEST(test_veriIngressos_normal){
    int qntdTickets = verificarQntd(3);
    mu_assert_int_eq(1, qntdTickets);
}

//Teste 2: Verifica se o tratamento para qntd de tikets acima está funcionando corretamente
MU_TEST(test_veriIngressos_acima){
    int qntdTickets = verificarQntd(6);
    mu_assert_int_eq(-1, qntdTickets);
}

//Teste 3: Verifica se o tratamento para qntd de tikets abaixo está funcionando corretamente
MU_TEST(test_veriIngressos_abaixo){
    int qntdTickets = verificarQntd(0);
    mu_assert_int_eq(-1, qntdTickets);
}

//Teste 4: Verifica de o tratamento para o cálculo de preço por idade (0 à 12 anos) está funcionando corretamente
MU_TEST(test_calculoPorIdade_normal_0_12){
    double preco = calcularPrecoPorIdade(12, 3);
    mu_assert_double_eq(30, preco);
}

//Teste 5: Verifica de o tratamento para o cálculo de preço por idade (13 à 59 anos) está funcionando corretamente
MU_TEST(test_calculoPorIdade_normal_13_59){
    double preco = calcularPrecoPorIdade(59, 3);
    mu_assert_double_eq(90, preco);
}
//Teste 6: Verifica de o tratamento para o cálculo de preço por idade (60 à 200 anos) está funcionando corretamente
MU_TEST(test_calculoPorIdade_normal_60_200){
    double preco = calcularPrecoPorIdade(60, 3);
    mu_assert_double_eq(45, preco);
}
//Teste 7: Verifica de o tratamento para o cálculo de preço por idade com idade abaixo está funcionando corretamente
MU_TEST(test_calculoPorIdade_abaixo){
    double preco = calcularPrecoPorIdade(-1, 3);
    mu_assert_double_eq(-1, preco);
}
//Teste 8: Verifica de o tratamento para o cálculo de preço por idade com idade acima está funcionando corretamente
MU_TEST(test_calculoPorIdade_acima){  
    double preco = calcularPrecoPorIdade(201, 3);
    mu_assert_double_eq(-1, preco);
}



MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_veriIngressos_normal);
    MU_RUN_TEST(test_veriIngressos_acima);
    MU_RUN_TEST(test_veriIngressos_abaixo);
    MU_RUN_TEST(test_calculoPorIdade_normal_0_12);
    MU_RUN_TEST(test_calculoPorIdade_normal_13_59);
    MU_RUN_TEST(test_calculoPorIdade_normal_60_200);
    MU_RUN_TEST(test_calculoPorIdade_abaixo);
    MU_RUN_TEST(test_calculoPorIdade_acima);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
