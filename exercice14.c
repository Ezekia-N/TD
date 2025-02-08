/*Ce programme calcule et affiche la somme
 S = 1/1 + 1/2 +...+1/n où n est saisi au clavier*/
#include <stdio.h>
int main()
{
    int n;
    float i, som;
    printf("S = 1/1 + 1/2 + ... + 1/n ou n est saisi par l'utilisateur\n");
    printf("Entrez le nombre entier naturel n =  ");
    scanf("%d", &n);
    som = 0;
    for (i=1; i<=n; i+=1)
    {
        som = som + (1/i);
    }
    printf("S = %.2f\n", som);
    return(0);
}
