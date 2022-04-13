/*
  Aluno: Messias Wagner da Silva Dias
  Matricula: 600912959
  Curso: Lógica de programação de Algoritmos I
  Professora: Alessanda Fonseca
  Polo: Recife - PE
  Execício: Avaliação A1F

  7- Faça um algoritmo para ler a base e a altura de um triângulo. Em seguida, escreva a área do mesmo.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  int base, altura;
  float area;

  printf("\n### Questão 7 ###\n");
  printf("Faça um algoritmo para ler a base e a altura de um triângulo. Em seguida, escreva a área do mesmo.\n\n");

  printf("Considerando o valor em cm (centímetros), digite o valor da Base do triângulo: ");
  scanf("%d", &base);

  printf("Agora digite o valor da Altura do triângulo: ");
  scanf("%d", &altura);

  area = (base * altura) / 2;
  printf("\n\nA área do triângulo é '%f'.\n\n\n", area);  
}