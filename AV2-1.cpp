#include <stdlib.h>
#include <stdio.h>

int main()
{
int M[4][5];
int N[4][5];
int O[4][5];
int i,j;

printf("Matriz M\n");
for ( i = 0; i < 4; i++)
{
    for ( j = 0; j < 5; j++)
    {
        printf("Digite M[%d][%d]: ",i,j);
        scanf("%d",&M[i][j]);
    }
}

for ( i = 0; i < 4; i++)
{
    for ( j = 0; j < 5; j++)
    {
        printf("Digite N[%d][%d]: ",i,j);
        scanf("%d",&N[i][j]);
    }
}

for ( i = 0; i < 4; i++)
{
    for ( j = 0; j < 5; j++)
    {
        O[i][j]=5*M[i][j]-2*N[i][j];
    }
}

printf("O[i][j] = 5*M[i][j] - 2*N[i][j]:\n");
printf("\n");

for ( i = 0; i < 4; i++)
{
    for ( j = 0; j < 5; j++)
    {
        printf("/%d",O[i][j]);
    }
    printf("\n");
}
}