#include<stdlib.h>
#include<stdio.h>

struct lista_clientes
{
    char nome[50];
    char endereco[100];
    int idade;
    int telefone;
}
clientes[10];


int main()
{
    int i;
    for ( i = 0; i <= 10; i++)
    {
        printf("\n---------- ALUNO NUMERO %d ----------\n",i);
        printf("\nDigite o nome: ");
        scanf("%s",clientes[i].nome);

        printf("\nDigite o endereco: ");
        scanf("%s",clientes[i].endereco);

        printf("\nDigite a idade: ");
        scanf("%d",&clientes[i].idade);

        printf("\nDigite o telefone: ");
        scanf("%d",&clientes[i].telefone);
    }
    printf("\n");
    printf("Nome do sexto cliente: %s\n",clientes[5].nome);
    printf("Endereco do nono cliente: %s\n",clientes[8].endereco);
    printf("Idade do quarto cliente: %d\n",clientes[3].idade);
    printf("Telefone do terceiro cliente: %d\n",clientes[2].telefone);
    return 0;
}
