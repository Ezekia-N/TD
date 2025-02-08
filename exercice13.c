/*Ce programme calcule et affiche la multiplication 
P = 1*2*3*...*n où n est saisi au clavier*/
#include <stdio.h>
int main()
{
    int i,n,pro;
    printf("Multiplication P = 1*2*3*...*n ou n est saisi au clavier\n");
    printf("Entrez le nombre entier naturel n = ");
    scanf("%d", &n);
    pro = 1;
    for (i = 1; i<=n; i+=1)
    {
        pro = pro * i;
    }
    printf("P = %d\n", pro);
    return (0);
}
