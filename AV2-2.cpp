#include <stdlib.h>
#include <stdio.h>

int main()
{
    float x;
    float *p;
    printf("Digite o valor de X: ");
    scanf("%f",&x);
    p=&x;
    x=*p/3;
    printf("O endereco de P eh %p, e o valor de X eh %.2f.",p,x);
    return 0;
}
