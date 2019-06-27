#include <stdio.h>
#include <stdlib.h>

void leitor (int num[]){
    int v[4],i,y;
    for(i=0; i<4;i++){

        printf("informe o numero: ");
        scanf("%d", & num[i]);
        getchar();
    }
}

int main()
{
    int z[10], i;
    leitor(z);

    for (i=0; i<4;i++){

        printf("Valor: %d\n", z[i]);
    }
    return 0;
}
