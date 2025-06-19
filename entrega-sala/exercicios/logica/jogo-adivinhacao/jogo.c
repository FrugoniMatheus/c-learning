#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int tentativas = 0;

int gerarNumeroInteiroAleatorio(int *numero, int numeroLimite){
  srand(time(NULL));
  *numero = (rand() % numeroLimite) + 1;
  
}

int main(){
  int numeroSorteio, tentativaUsuario;
  int acertou = 0;
  gerarNumeroInteiroAleatorio(&numeroSorteio, 100);
  while (acertou == 0){
    printf("Digite seu palpite: ");
    scanf("%d", &tentativaUsuario);
    if(tentativaUsuario == numeroSorteio){
      tentativas ++;
      printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
      acertou = 1;
    } 
    else if (tentativaUsuario > numeroSorteio){
      printf("Muito Alto!\n");
    } 
    else if(tentativaUsuario < numeroSorteio){
      printf("Muito baixo!\n");
    } 
    else{
      printf("Numero nao identificado\n");
    }
    tentativas ++;
  }

  return 0;
}