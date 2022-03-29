#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>



int main() {
setlocale(LC_ALL,"Portuguese");
  int opcao, cod_w;

  struct {
    int codigo;
    char descricao[50];
    float A1;
    float A2;
    float A3;
    float media;
  } disciplinas[5];

  for (int i = 0; i < 5; ++i) {
    disciplinas[i].codigo = -1;
    strcpy(disciplinas[i].descricao, "NULL");
    disciplinas[i].A1 = 0.0;
    disciplinas[i].A2 = 0.0;
    disciplinas[i].A3 = 0.0;
    disciplinas[i].media = 0.0;
  }

  while(1) {
    printf("\n1- Inserir | 2- Alterar | 3- Remover | 4- Exibir | 0- Sair");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao) {
      case 0:
        exit(0);
      case 1:
        for (int i = 0; i < 5; ++i) {
          if (disciplinas[i].codigo == -1) {
            printf("\nDigite o codigo da disciplina: ");
            scanf("%d", &disciplinas[i].codigo);

            printf("\nDigite a descricao: ");
            scanf("%s", disciplinas[i].descricao);

            printf("\nDigite a notaA1: ");
            scanf("%f", &disciplinas[i].A1);

            printf("\nDigite a notaA2: ");
            scanf("%f", &disciplinas[i].A2);

            printf("\nDigite a notaA3: ");
            scanf("%f", &disciplinas[i].A3);

            disciplinas[i].media = (disciplinas[i].A1 + disciplinas[i].A2 + disciplinas[i].A3) / 3.0;
            break;
          }
        }
        break;
      case 2:
        printf("\nDigite o codigo da disciplina que deseja alterar: ");
        scanf("%d", &cod_w);

        for (int i = 0; i < 5; ++i) {
          if (disciplinas[i].codigo == cod_w) {

            printf("\nDigite a nova descricao: ");
            scanf("%s", disciplinas[i].descricao);

            printf("\nDigite a nova notaA1: ");
            scanf("%f", &disciplinas[i].A1);

            printf("\nDigite a nova notaA2: ");
            scanf("%f", &disciplinas[i].A2);

            printf("\nDigite a nova notaA3: ");
            scanf("%f", &disciplinas[i].A3);

            disciplinas[i].media = (disciplinas[i].A1 + disciplinas[i].A2 + disciplinas[i].A3) / 3.0;
            break;
          }
        }
        break;
      case 3:
        printf("\nDigite o codigo da disciplina que deseja apagar os dados: ");
        scanf("%d", &cod_w);

        for (int i = 0; i < 5; ++i) {
          if (disciplinas[i].codigo == cod_w) {

            disciplinas[i].codigo = -1;
            strcpy(disciplinas[i].descricao, "NULL");
            disciplinas[i].A1 = 0.0;
            disciplinas[i].A2 = 0.0;
            disciplinas[i].A3 = 0.0;
            disciplinas[i].media = 0.0;        
            break;
          }
        }
        break;
      case 4:
        for(int i=0; i<5; i++) {
          printf("\nCodigo: %d", disciplinas[i].codigo);
          printf("\nDescricao: %s", disciplinas[i].descricao);
          printf("\nNotaA1: %.2f", disciplinas[i].A1);
          printf("\nNotaA2: %.2f", disciplinas[i].A2);
          printf("\nNotaA3: %.2f", disciplinas[i].A3);
          printf("\nMedia: %.2f", disciplinas[i].media);
          printf("\n");
        }
        break;
      default:
        printf("Opcao invalida!");
    }
  }
}