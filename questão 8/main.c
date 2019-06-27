#include <stdio.h>
#include <stdlib.h>
#define TAM 2
void cadastrarClientes(Clientes);
typedef struct dadospessoais{
        char nome[80];
        char sexo [2];
        int diadeniver;
        int mesdeniver;
        int anoniver;
        int cpf;

    }Clientes;


int main()
{

    Clientes x;
    cadastrarClientes(&x);
    puts(x.nome);
    puts(x.sexo);
    printf(" %2d/%2d/%4d\n", x.diadeniver, x.mesdeniver, x.anoniver);
    printf(" %d", x.cpf);



    return 0;
}


void cadastrarClientes(Clientes *x){
    printf("Informe o nome:...........  ");
    gets(x->nome);
    printf("Informe o sexo:...........  ");
    gets(x->sexo);
    printf(" informe o dia do seu nascimento:...........  ");
    scanf("%d", &x->diadeniver);
    printf(" informe o mes do seu nascimento:...........  ");
    scanf("%d", &x->mesdeniver);
    printf(" informe o ano do seu nascimento:...........  ");
    scanf("%d", &x->anoniver);
    printf(" informe o cpf :...........  ");
    scanf("%d", &x->cpf);



fflush(stdin);


}
