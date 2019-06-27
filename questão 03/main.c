#include <stdio.h>
#include <stdlib.h>
int fatorial (int x, int y);
int main()
{
    int x, y;
    printf("Informe um numero: ");
    scanf("%d", &x);
    y= fatorial(x,y);
    if(x>1){
    printf("O fatorial de %d eh: %d", x,y);
    }
    return 0;
}

int fatorial(int x, int y){
    if (x==0 || x==1){

        printf("O fatorial de %d eh: 1", x);
    }

    if (x<0){
        y= printf("ERRO DIGITE UM NOVO NUMERO");
    }


     if (x>1){

        for ( y=1; x>1; x--){

            y=y*x;

        }


     }


    }

