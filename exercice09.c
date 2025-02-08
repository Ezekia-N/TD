/*Ce programme affiche le nombre pair compris entre 1 
et n où n est saisie au clavier*/
#include <stdio.h>
int main()
{
    int n, i;
    printf("Entrez un nombre entier naturel : ");
    scanf("%d", &n);
    printf("Les nombres pairs compris entre 1 et %d sont : \n", n);
    for(i=1; i<=n; i+=1)
    {
        if (i%2 == 0)
        {
            printf("%d\n",i);
        }
    }
    return (0);
}