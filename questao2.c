/*
  Aluno: Messias Wagner da Silva Dias
  Matricula: 600912959
  Curso: Lógica de programação de Algoritmos I
  Professora: Alessanda Fonseca
  Polo: Recife - PE
  Execício: Avaliação A1F

  2 - Faça um algoritmo que informe o nome e idade de duas pessoas. Mostre o nome e idade das duas pessoas na tela.
*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
  char nome[2][50];
  int idade[2], i;

  printf("\n### Questão 2 ###\n");
  printf("Faça um algoritmo que informe o nome e idade de duas pessoas.\n");
  printf("Mostre o nome e idade das duas pessoas na tela. \n\n");

  printf("\nPara iniciarmos ");
  for (i = 1; i <= 2; i++)
  {
    if (i > 1) {
      printf("\nAgora ");
    }
    printf("preecha seus dados da %dª Pessoa: \n\n", i);

    printf("Digite o Nome: ");
    scanf("%s", nome[i - 1]);

    printf("Digite a Idade: ");
    scanf("%d", &idade[i - 1]);
  }

  printf("\n\n### Dados das Pessoas ####\n\n");
  for (i = 1; i <= 2; i++)
  {
    printf("O Nome da %dª pessoa é '%s' que possue '%d' anos de idade.\n", i, nome[i - 1], idade[i - 1]);
  }
  
  printf("\n\n");
}