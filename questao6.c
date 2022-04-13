/*
  Aluno: Messias Wagner da Silva Dias
  Matricula: 600912959
  Curso: Lógica de programação de Algoritmos I
  Professora: Alessanda Fonseca
  Polo: Recife - PE
  Execício: Avaliação A1F

  6- Faça um algoritmo que leia a descrição do produto, quantidade em estoque e valor unitário
  do produto. Informe o valor total em produtos existente no estoque.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
  char descricao[50];
  int quantidade;
  double valor, estoque;

  printf("\n### Questão 6 ###\n");
  printf("Faça um algoritmo que leia a descrição do produto, quantidade em estoque e valor unitário\n");
  printf("do produto. Informe o valor total em produtos existente no estoque.\n\n");

  printf("Digite a descrição do Produto: ");
  scanf("%s", descricao);

  printf("Digite a quantidade de unidades do Produto: ");
  scanf("%d", &quantidade);

  printf("Digite o valor unitário do Produto: ");
  scanf("%lf", &valor);
  
  estoque = quantidade * valor;
  printf("\n\nO valor total em produtos existente no estoque é %lf R$ .\n\n\n", estoque);  
}