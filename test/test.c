#include "minunit-master\minunit.h"
#include "../src/venda-de-bilhetes.h"

//Teste 1: Verifica se o tratamento para qntd de tikets está funcionando corretamente
MU_TEST(test_calculo_normal){
    int qntdTickets = verificarQntd(3);
    mu_assert_double_eq(1, qntdTickets);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_calculo_normal);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}