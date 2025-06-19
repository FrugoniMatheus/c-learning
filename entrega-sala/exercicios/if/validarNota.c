#include <stdio.h>

int main(){
    double nota;
    printf("Inserir uma nota de (0-10): ");
    scanf("%lf",&nota);

    if (nota >= 9){
        printf("Passou de ano, com maestria\n");
    }
    else if (nota >= 7){
        printf("Passou de ano\n");
    }
    else if (nota >= 5){
        printf("Reprovado, solicitar prova substitutiva\n");
    }
    else if (nota >= 3){
        printf("Repovado, sem prova substitutiva\n");
    }
    else if (nota < 3){
        printf("Reprovado, com maestria\n");
    }
    else{
        printf("Errou algo ai amigao");
    }
    return 0;
}