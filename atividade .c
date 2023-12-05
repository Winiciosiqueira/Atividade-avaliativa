#include<stdio.h>

int main()
{int ano;
    printf("informe seu ano de nascimento");
    scanf("%i",&ano);
    int idade=2023-ano;
    if(idade>15){
    printf("pode votar");}
    else{
      printf("não pode votar");
    }
    return 0;
}