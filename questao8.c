/*
  Aluno: Messias Wagner da Silva Dias
  Matricula: 600912959
  Curso: Lógica de programação de Algoritmos I
  Professora: Alessanda Fonseca
  Polo: Recife - PE
  Execício: Avaliação A1F

  8- Construa um algoritmo para calcular as raízes de uma equação do 2º grau, sendo que os
  valores A, B e C são fornecidos pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
  int x, a, b, c;

  printf("\n### Questão 8 ###\n");
  printf("Construa um algoritmo para calcular as raízes de uma equação do 2º grau,\n");
  printf("sendo que os valores A, B e C são fornecidos pelo usuário.\n\n");

  printf("Digite o valor de A: ");
  scanf("%d", &a);

  printf("Digite o valor de B: ");
  scanf("%d", &b);

  printf("Digite o valor de C: ");
  scanf("%d", &c);

  x = (-(b) + (sqrt((b * b) - (4 * a * c)) * (1 / 2))) / (2 * a);
  printf("\n\nAs raízes de uma equação do 2º grau é '%d'.\n\n\n", x); 
}