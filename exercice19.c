/*Ce programme lit deux entiers et affiche s'ils sont 
premier entre eux ou non*/
#include <stdio.h>
int main()
{
    int n1, n2, r, a1, a2;

    printf("Entrez le premier nombre : ");
    scanf("%d", &n1);
    printf("Entrez le second nombre : ");
    scanf("%d", &n2);
    a1 = n1;
    a2 = n2;
    do 
    {
        r = n1%n2;
        n1 = n2;
        n2 = r;
    }
    while (r != 0);
    if (n1 == 1)
    {
        printf("%d et %d sont premier entre eux\n", a1, a2);
    }
    else
    {
        printf("%d et %d ne sont pas premier ente eux\n", a1, a2);
    }
    return(0);
}