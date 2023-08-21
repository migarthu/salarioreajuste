#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste, novoSalario;

    printf("Digite o salario mensal atual do funcionario: ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    novoSalario = salarioAtual * (1 + percentualReajuste / 100);

    printf("O novo salario do funcionario e: R$ %.2f\n", novoSalario);

    return 0;
}
