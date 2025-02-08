/*Ce programme affiche 1 jusqu'à n ou n est une valeur saisie
en clavier*/
#include <stdio.h>
int main()
{
    int n, i;
    printf("Entrez un nombre entier naturel : ");
    scanf("%d", &n);
    printf("Les nombres de 1 jusqu'à %d sont : \n", n);
    for(i = 1; i<=n; i+=1)
    {
        printf("%d\n",i);
    }
    return (0);
}