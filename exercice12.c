/*Ce programme calcule et affiche la somme 
S = 1+2+3+..+n où n est saisie au clavier*/
#include <stdio.h>
int main()
{
    int i,n,som;
    printf("S = 1+2+3+..+n où n est saisi au clavier\n");
    printf("Entrez le nombre entier naturel n = ");
    scanf("%d", &n);
    som = 0;
    for (i = 1; i<=n; i+=1)
    {
        som = som + i;
    }
    printf("La somme des nombres entre 1 à %d : \n", n);
    printf("S = %d\n", som);
    return (0);
}
