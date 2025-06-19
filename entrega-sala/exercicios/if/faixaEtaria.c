#include <stdio.h>

int main(){

    char nome [50];
    int idade;

    printf("Informe o seu nome: ");
    fgets(nome, 49, stdin);

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Adulto\n");
    }
    else if (idade >= 15){
        printf("Jovem\n");
    }
    else if (idade  < 15){
        printf("Crianca\n");
    }
    else{
        printf("Errou algo ai amigao");
    }
    return 0;
}