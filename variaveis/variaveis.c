#include <stdio.h>

int main(){

  /*Formas de declaração de variáveis em C com tipagem*/
  int numeroInteiro = 10;
  char caractere = 'c';
  char nome[50] = "Matheus";
  float numeroFloat = 3.4;
  double numeroFloat2 = 4.3;


  /*Função para imprimir algo formatado
   *Com a utilização de varíaveis a gente precisa colocar %x
   *Para a função entender qual tipo de variável queremos imprimir.
  */

  /*Tabela da formatação :
   * INT    | %d
   * Float  | %f    (ou %xf para casa decimais)
   * Double | %f ou %lf
   * Char   | %c
   * String | %s
  */

  printf("Numero inteiro: %d\n", numeroInteiro);
  printf("Numero float: %f\n", numeroFloat);
  printf("Numero inteiro: %.2f\n", numeroFloat2);
  printf("Caractere: %c\n", caractere);
  printf("String: %s\n", nome);

  return 0;
}