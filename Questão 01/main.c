#include <stdio.h>
#include <stdlib.h>
int soma (int x, int y);
int main()
{
    int x, y, valor;

    printf("Informe o valor da primeira parcela: ");
    scanf("%d", &x);
    printf("Informe o valor da segunda parcela: ");
    scanf("%d", &y);
    valor= soma(x,y);
    printf("O valor da soma eh: %d", valor);
    return 0;
}

int soma(int x, int y){
    int resultado= x+y;
    return resultado;

}
