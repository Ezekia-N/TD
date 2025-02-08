/*Ce progrmame calcule et affiche S = 1/1! + 1/2! + 1/3! + ... + 1/n! 
ou n est saisi au clavier*/
#include <stdio.h>
int main()
{
    int n, i, j;
    float som, fact;
    printf("S = 1/1! + 1/2! + 1/3! + ... + 1/n! ou n est saisi au clavier\n");
    printf("Entrez le nombre entier naturel n = ");
    scanf("%d", &n);
    som = 0;
    for (i=1; i<=n; i+=1)
    {
        fact = 1;
        for (j=1; j<=i; j+=1)
        {
            fact = fact * j;
        }
        som = som + (1/fact);
    }
    printf("S = %.2f\n", som);
    return(0);
}
