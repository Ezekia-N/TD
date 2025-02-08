/*Ce programme permet d'échanger les valeurs de trois
variables a, b, c*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Entrez trois valeurs : \n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    d = a;/*d vaut a*/
    a = b;/*a vaut b*/
    b = c;/*b vaut c*/
    c = d;/*c vaut d*/
    printf("a devient %d\n",a);
    printf("b devient %d\n",b);
    printf("c devient %d\n",c);
    return (0);
}