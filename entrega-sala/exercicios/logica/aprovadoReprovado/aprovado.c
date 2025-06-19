#include <stdio.h>

double mediaAlunos(double v[], int tamanho){
  int i;
  double media = 0;
  for(i = 0; i < tamanho; i++){
    media += v[i];
  }
  return media / tamanho;
}

int main(){

  double notasAlunos[5];
  int i, tamanhoNotasAlunos, mediaProvas;
  tamanhoNotasAlunos = sizeof(notasAlunos) / sizeof(notasAlunos[0]);

  for(i = 0; i < tamanhoNotasAlunos; i++){
    printf("Digite a nota do %d aluno: ", i + 1);
    scanf("%lf", &notasAlunos[i]);
  }

  double media;
  media = mediaAlunos(notasAlunos, tamanhoNotasAlunos);
  printf("A media eh: %.1f\n", media);

  for(i = 0; i < tamanhoNotasAlunos; i++){
    if(notasAlunos[i] >= media){
      printf("Aluno %d: Aprovado\n", i + 1);
    }
    else {
      printf("Aluno %d: Reprovado\n", i + 1);
    }
  }

  return 0;
}