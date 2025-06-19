#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h> 

int qnt_retirada = 0;
int qnt_deposito = 0;

void sacarDinheiro(double *saldoUsuario, double retirada){
  qnt_retirada = qnt_retirada + 1;
  *saldoUsuario = *saldoUsuario - retirada;
}

void depositarDinheiro(double *saldoUsuario, double deposito){
  qnt_deposito = qnt_deposito + 1;
  *saldoUsuario = *saldoUsuario + deposito;
}

int main(){
  int op;
  double retirada, deposito, saldoUsuario;

  srand(time(NULL));
  saldoUsuario = rand() % 9000;

 do
 {
  printf("Operacoes disponiveis:\n1-[SALDO]\n2-[SACAR]\n3-[DEPOSITAR]\n4-[SAIR]\nDigite o numero da operacao:");
  scanf("%d",&op);
  switch (op) {
   case 1:
     printf("Seu saldo eh de: %.2f\n", saldoUsuario);
     break;
   case 2:
     retorno: 
     printf("Qual valor deseja retirar? ");
     scanf("%lf", &retirada);
     if (retirada > saldoUsuario || retirada < 0){
      printf("Valor invalido ou saldo insuficiente!!Por favor digite um valor valido\n");
      goto retorno;
     } else{
      sacarDinheiro(&saldoUsuario, retirada);
     }
     break;
    case 3: 
      deposito: 
      printf("Valor para deposito: ");
      scanf("%lf", &deposito);
      if (deposito < 0) {
        printf("Valor invalido!!Por favor digite novamente o valor: \n");
        goto deposito;
      } else { 
        depositarDinheiro(&saldoUsuario, deposito);
      }
      break;
    case 4: 
      printf("Saindo do sistema, muito obrigado pela visita, logo informaremos seu historico!\n");
      printf("O numero de saques foram: %d\n", qnt_retirada);
      printf("O numero de depositos foram: %d\n", qnt_deposito);
      return 0;

   default:
     printf("Opcao invalida, digite novamente!\n");
     break;
  }
 } while (true);
 
 return 0;
}