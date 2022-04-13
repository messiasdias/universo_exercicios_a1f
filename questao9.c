/*
  Aluno: Messias Wagner da Silva Dias
  Matricula: 600912959
  Curso: Lógica de programação de Algoritmos I
  Professora: Alessanda Fonseca
  Polo: Recife - PE
  Execício: Avaliação A1F

  9- Faça um algoritmo para transformar o valor correspondente a um intervalo temporal,
  expresso em horas, minutos e segundos, no valor correspondente em segundos
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
  char intervalo[] = "00:00:00";
  int horas, minutos, segundos, intervalo_total_segundos;

  printf("\n### Questão 9 ###\n");
  printf("Faça um algoritmo para transformar o valor correspondente a um intervalo temporal,\n");
  printf("expresso em horas, minutos e segundos, no valor correspondente em segundos.\n\n");

  printf("Digite o valor do intervalo temporal, exemplo %s : ", intervalo);
  scanf("%s", intervalo);

  horas = atoi(strtok(intervalo, ":"));
  minutos = atoi(strtok(NULL, ":"));
  segundos = atoi(strtok(NULL, ":"));

  if((horas >= 0) && (minutos <= 59) && (segundos <= 59)) {
    horas  = (horas * 60) * 60;
    minutos  = minutos * 60;
    intervalo_total_segundos = horas + minutos + segundos;
    printf("\n\nO valor correspondente em segundos é '%d'.\n\n\n", intervalo_total_segundos); 
  } else {
    printf("\n\nO valor de entrada é inválido para intervalo de tempo.\n\n\n"); 
  }
}