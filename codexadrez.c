#include <stdio.h>

void recursiva_torre(int casa_torre){
    while (casa_torre <= 5)
    {
        printf("Direita\n");
        casa_torre++;
    }  
}

void recursiva_bispo(int casa_bispo){

    while (casa_bispo <= 5)
    {
        printf("Cima, ");
        for (int i = 1; i < 2; i++)
        {
            printf("Direita\n");
        }
        casa_bispo++;
    }
 
 } 
          
void recursiva_rainha(int casa_rainha){
    do
    {
        printf("Esquerda\n");
        casa_rainha++;
    } while (casa_rainha <= 5);
}

void recursiva_cavalo(int cavalo){

    while (cavalo <= 1)
    {
        for (int i = 1; i <= 2; i++)
        {
            printf("Cima\n");
        }
        printf("Direita");
        cavalo++;
    }
}

int main(){

    printf("Qual peça você deseja mover?\n");
    printf("Opções: \n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    int peca;
    scanf("%d", &peca);
    
    switch (peca)
    {
    case 1:
        printf("Movimento da Torre: \n");
        recursiva_torre(1);
        break;   
    
    case 2:
        printf("Movimento do Bispo: \n");
        recursiva_bispo(1);
        break;
    
    case 3:
        printf("Movimento da Rainha: \n");
        recursiva_rainha(1);
        break;

    case 4:
        printf("Movimento do Cavalo: \n");
        recursiva_cavalo(1);    
        break;

    default:
        printf("Opção inválida.");
        break;
    }
   
    return 0;
}
