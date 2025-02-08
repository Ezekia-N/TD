/*Ce programme lit deux entiers saisis au clavier, 
calcule et affiche leur pgcd*/
#include <stdio.h>
int main()
{
    int a, b, r, a1, b1;
    printf("PGCD(a;b)\n");
    printf("Entrez a = ");
    scanf("%d", &a);
    printf("Entrez b = ");
    scanf("%d", &b);
    a1 = a;
    b1 = b;
    do 
    {
        r = a%b;
        a = b;
        b = r;
    }
    while (r != 0);
    printf("PGCD(%d;%d) = %d\n",a1 ,b1 , a);
    return(0);
}