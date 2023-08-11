#include <stdio.h>

int main()
{
    float celsios, fahrenheit;
    printf("digite graus celsios: ");
    scanf("%f", &celsios);

    fahrenheit = (celsios * 9 / 5) + 32;

    printf("equivale graus fahrenheit:%.2f\n ", fahrenheit);

    return 0;
}

int main()
{
    float real, dolar, cambio;
    printf("digite valor em real: ");
    scanf("%f", &real);
    printf("digite valor em cambio: ");
    scanf("%f", &cambio);
    dolar = (real * cambio);

    printf("A conversão do em reais para dólar:%.2f", dolar);

    return 0;
}
#include <stdio.h>

int main()
{
    float comsumo_medio, autonomia, capacidade_do_tanque, quantidade_de_litros, quilometragem;
    printf("capacidade do tanque: ");
    scanf("%f", &capacidade_do_tanque);

    printf("quantidade de litros: ");
    scanf("%f", &quantidade_de_litros);

    printf("quilometragem: ");
    scanf("%f", &quilometragem);

    comsumo_medio = (quilometragem / quantidade_de_litros);

    autonomia = (capacidade_do_tanque - quantidade_de_litros);

    printf("\ncomsumo medio:%.2f\n", comsumo_medio);
    printf("\nautonomia:%.2f\n", autonomia);

    return 0;
}
#include <stdio.h>

int main(exercicio8)
{
    float Kmpercorrido, DiasAlugado, ValorApagar;
    printf("Kmpercorrido: ");
    scanf("%f", &Kmpercorrido);

    printf("DiasAludado: ");
    scanf("%f", &DiasAlugado);

    ValorApagar = (Kmpercorrido * 0, 15) + (DiasAlugado * 70);
    printf("\nvalorapagar:%.2f\n", ValorApagar);

    return 0;
}
#include <stdio.h>

int main(exercicio8)
{
    float gorjetaDOgarson, valor_gastocliente, valor_total;

    // valor da comiçao do garçon//
    gorjetaDOgarson = 10 %

                      printf("quanto o cliente gastou: ");
    scanf("%f", &valor_gastocliente);

    valor_total = (valor_gastocliente + gorjetaDOgarson);

    printf("\nvalor da gorjeta:%.2f\n", gorjetaDOgarson);
    printf("\nvalor total que o cliente vai pagar:%.2f\n", valor_total);

    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>

int main(exercicio8)
{
    float vendas_ao_mestotal, salario, sapatos_vendidos;

    // valor//
    // comissao =20%//
    // comissao_sapatos = 5//

    printf("total de vendas do mês: R$");
    scanf("%f", &vendas_ao_mestotal);

    printf("parees de sapatos vendidos: ");
    scanf("%f", &sapatos_vendidos);

    salario = (vendas_ao_mestotal * 0.20) + (sapatos_vendidos * 5);

    printf("total do salario do vendeedor:%.2fR$", salario);

    return 0;
}
estou alterando arquivo teste
