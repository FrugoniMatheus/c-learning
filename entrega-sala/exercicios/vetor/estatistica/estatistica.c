#include <stdio.h>

int maiorNumeroInformado(int *v[], int tamanho){
  int maiorNumero = v[0];
  int i = 0;
  for (i = 0; i < tamanho; i++){
    if(maiorNumero <= v[i]){
      maiorNumero = v[i];
    }
  }
  return maiorNumero;
}

int menorNumeroInformado(int *v[], int tamanho){
  int menorNumero = v[0];
  int i;
  for (i = 0; i < tamanho; i++){
    if(menorNumero > v[i]){
      menorNumero = v[i];
    }
  }
  return menorNumero;
}

int quantidadeParesInformado(int v[], int tamanho){
  int quantidade = 0;
  int i;
  for (i = 0; i < tamanho; i++){
    if(v[i] % 2 == 0){
      quantidade = quantidade + 1;
    }
  }
  return quantidade;
}

int main(){

  int numeroInformado[10];
  int tamanhoNumeroInformado = sizeof(numeroInformado) / sizeof(numeroInformado[0]);
  
  int i;
  for (i = 0; i < tamanhoNumeroInformado; i++){
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &numeroInformado[i]);
  }

  int maiorNumero = maiorNumeroInformado(numeroInformado, tamanhoNumeroInformado);
  printf("O maior numero eh: %d\n", maiorNumero);

  int menorNumero = menorNumeroInformado(numeroInformado, tamanhoNumeroInformado);
  printf("O menor numero eh: %d\n", menorNumero);

  int quantidadePares = quantidadeParesInformado(numeroInformado, tamanhoNumeroInformado);
  printf("Pares: %d\n", quantidadePares);
  
  return 0;
}