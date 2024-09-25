#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int choice;
    float coin, valorF, taxaCambio;

    do{
        printf("\n1 - BRA -> USD\n2 - USD -> BRA\n3 - BRA -> EUR\n4 - EUR -> BRA\n0 - Encerrar\n");
        scanf("%d", &choice);

        printf("Digite um valor\n");
        scanf("%f", &coin);

        
        switch(choice){
            case 1:{
                taxaCambio = 5.43;
                valorF = coin / taxaCambio;
                printf("R$%.2f equivale à $%.2f\n", coin, valorF);
                break;
            }
            case 2:{
                taxaCambio = 5.43;
                valorF = coin / taxaCambio;
                printf("$%.2f equivale à R$%.2f\n", coin, valorF);
                break;
            }
            case 3:{
                taxaCambio = 6.06;
                valorF = coin / taxaCambio;
                printf("R$%.2f equivale à €%.2f\n", coin, valorF);
                break;
            }
            case 4:{
                taxaCambio = 6.06;
                valorF = coin / taxaCambio;
                printf("€%.2f equivale à R$%.2f\n", coin, valorF);
                break;
            }
            case 0:{
                printf("Encerrando programa...\n");
                break;
            }
            default:{ 
                printf("Escolha inválida\n");
                break;
            }
        }
        
    }while(choice != 0);

    return 0;
}