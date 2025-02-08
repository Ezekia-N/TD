/*Ce programme affiche les diviseurs d'un entier n à saisir au clavier*/
#include <stdio.h>
int main()
{
    int n, i;
    printf("Entrez un nombre entier naturel : ");
    scanf("%d", &n);
    printf("Les diviseurs de %d sont : \n", n);
    for(i=1; i<=n; i+=1)
    {
        if (n%i == 0)
        {
            printf("%d\n",i);
        }
    }
    return (0);
}
