/*
  Aluno: Messias Wagner da Silva Dias
  Matricula: 600912959
  Curso: Lógica de programação de Algoritmos I
  Professora: Alessanda Fonseca
  Polo: Recife - PE
  Execício: Avaliação A1F

  3- Faça um algoritmo que solicite a idade e o nome de quatro pessoas. 
  Calcule e imprima a média aritmética das idades.
*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
  int i, idades = 0, pessoas = 4;
  int idade[pessoas];
  char nome[pessoas][50];

  printf("\n### Questão 4 ###\n");
  printf("Faça um algoritmo que solicite a idade e o nome de quatro pessoas. \n");
  printf("Calcule e imprima a média aritmética das idades.\n\n");

  printf("\nPara iniciarmos ");
  for (i = 1; i <= pessoas; i++)
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
  for (i = 1; i <= pessoas; i++)
  {
    printf("O Nome da %dª pessoa é '%s' que possue '%d' anos de idade.\n", i,  nome[i - 1], idade[i - 1]);
    idades = idades + idade[i - 1];
  }

  printf("\nA média aritmética das idades das pessoas é '%d' anos.\n\n\n",  idades / pessoas);  
}