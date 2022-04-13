/*
  Aluno: Messias Wagner da Silva Dias
  Matricula: 600912959
  Curso: Lógica de programação de Algoritmos I
  Professora: Alessanda Fonseca
  Polo: Recife - PE
  Execício: Avaliação A1F

  1 - Faça um algoritmo para ler e em seguida exibir as seguintes informações de uma pessoa:
  Nome, Idade, Sexo, Peso, Altura, Profissão, Rua, Bairro, Cidade, Estado, CEP, Telefone.
*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
  char nome[50], sexo[9], profissao[50], telefone[12];
  char rua[50], bairro[50], cidade[100], estado[50], cep[9];
  float peso, altura;
  int idade, numero;

  printf("\n### Questão 1 ###\n");
  printf("Faça um algoritmo para ler e em seguida exibir as seguintes informações de uma pessoa:\n");
  printf("Nome, Idade, Sexo, Peso, Altura, Profissão, Rua, Bairro, Cidade, Estado, CEP, Telefone. \n\n");
  printf("\nPara iniciarmos preecha seus dados pessoais\n\n");

  //Dados pessoais
  printf("Digite seu Nome: ");
  scanf("%[^\n]s", nome);

  printf("Digite sua Idade: ");
  scanf("%d", &idade);

  printf("Digite seu Peso: ");
  scanf("%f", &peso);

  printf("Digite sua Altura: ");
  scanf("%f", &altura);

  printf("Digite sua Profissão: ");
  scanf("%s", profissao);

  //Endereço
  printf("Digite sua Rua: ");
  scanf("%s", rua);

  printf("Digite o Número da sua casa: ");
  scanf("%d", &numero);

  printf("Digite sua Bairro: ");
  scanf("%s", bairro);

  printf("Digite sua Ciadde: ");
  scanf("%s", cidade);

  printf("Digite seu Estado: ");
  scanf("%s", estado);

  printf("Digite o CEP: ");
  scanf("%s", cep);

  printf("\n\n### Dados do Usuário ####\n");
  printf("\n\n--- Pessoa ---\n");
  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Peso: %f\n", peso);
  printf("Altura: %f\n", altura);
  printf("Profissão: %s\n", profissao);

  printf("\n\n--- Endereço ---\n");
  printf("Rua %s, %d, %s, %s - %s | CEP: %s\n\n", rua, numero, bairro, cidade, estado, cep);
}