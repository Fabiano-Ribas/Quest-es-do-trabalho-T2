#include <stdio.h>
#include <stdlib.h>
 float subtracao (float x, float y, float z);
int main()
{
   float x, y, z, resultado;
   printf("Informe o primeiro número: ");
   scanf("%f", &x);
   printf("Informe o segundo número: ");
   scanf("%f", &y);
   printf("Informe o terceiro número: ");
   scanf("%f", &z);
   resultado= subtracao(x,y,z);
   printf("O resultado da subtracao eh: %2.f", resultado);
    return 0;
}

float subtracao(float x, float y, float z){
    float resultado= x-y-z;
    return resultado;

}
