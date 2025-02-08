/*Ce programme calcule et affiche 
la Somme S = 1 + 10 + 10^2 + ... + 10^n ou n est saisi au clavier*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    float som;
    printf("S = 1 + 10 + 10^2 + ... + 10^n ou n est saisi au clavier\n");
    printf("Entrez le nombre entier naturel n = ");
    scanf("%d", &n);
    som = 0;
    for (i=0; i<=n; i+=1)
    {
        som = som + pow(10, i);
    }
    printf("S = %.0f\n", som);
    return(0);
}
