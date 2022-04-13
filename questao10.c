/*
  Aluno: Messias Wagner da Silva Dias
  Matricula: 600912959
  Curso: Lógica de programação de Algoritmos I
  Professora: Alessanda Fonseca
  Polo: Recife - PE
  Execício: Avaliação A1F

    10- Faça um algoritmo para calcular e imprimir o salário bruto a ser recebido por um funcionário
    em um mês. Você deverá utilizar os seguintes dados: número de horas que o funcionário
    trabalhou no mês, valor recebido por hora de trabalho, o valor da contribuição ao INSS, número
    de dependentes (filhos menores de 14 anos para adicionar o salário família) e o valor do salário
    família por nº de dependentes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
  printf("\n### Questão 10 ###\n");
  printf("Faça um algoritmo para calcular e imprimir o salário bruto a ser recebido por um funcionário em um mês,\n");
  printf("Você deverá utilizar os seguintes dados: número de horas que o funcionário trabalhou no mês,\n");
  printf("valor recebido por hora de trabalho, o valor da contribuição ao INSS,\n");
  printf("número de dependentes (filhos menores de 14 anos para adicionar o salário família)\n");
  printf("e o valor do salário família por nº de dependentes.\n\n");

  int dependentes = 2;
  float 
  horas_mes = 220, 
  valor_hora = 20,
  valor_salario_familia = 25.50,
  valor_salario = horas_mes * valor_hora, 
  valor_inss = (valor_salario / 100) * 8,
  valor_salario_bruto = 0; 

  printf("Digite a quantidade de horas trabalhadas durante o mês - Ex 220: ");
  scanf("%f", &horas_mes);

  printf("Digite o valor por hora trabalhada - Ex 20.00: ");
  scanf("%f", &valor_hora);

  printf("Digite o número de dependentes, menores de 14 anos - Ex 2: ");
  scanf("%d", &dependentes);

  printf("Digite o valor do salário família - Ex 25.50: ");
  scanf("%f", &valor_salario_familia);

  valor_salario_bruto = (valor_salario - valor_inss) + (valor_salario_familia * dependentes);
  printf("\nValor do salário brudo a receber é '%f' R$.\n\n\n", valor_salario_bruto); 
}