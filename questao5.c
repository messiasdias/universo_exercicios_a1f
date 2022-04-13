/*
  Aluno: Messias Wagner da Silva Dias
  Matricula: 600912959
  Curso: Lógica de programação de Algoritmos I
  Professora: Alessanda Fonseca
  Polo: Recife - PE
  Execício: Avaliação A1F

  5- Faça um algoritmo para ler dois inteiros (variáveis A e B) e imprimir o resultado do quadrado
  da diferença do primeiro valor pelo segundo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
  int a, b;
  double quadrado;

  printf("\n### Questão 5 ###\n");
  printf("Faça um algoritmo para ler dois inteiros (variáveis A e B)\n");
  printf("e imprimir o resultado do quadrado da diferença do primeiro valor pelo segundo.\n\n");

  printf("Digite o Valor de A: ");
  scanf("%d", &a);

  printf("Digite o Valor de B: ");
  scanf("%d", &b);
  
  quadrado = pow((a - b), 2);
  printf("\n\nO quadrado da diferença do primeiro valor pelo segundo é '%lf' anos.\n\n\n", quadrado);  
}