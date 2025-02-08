/*Ce programme calcule et affiche le factoriel de n à saisir 
au clavier*/
#include <stdio.h>
int main()
{
    int fact, i, n;
    printf("n!\n");
    printf("Entrez le nombre entier naturel n = ");
    scanf("%d", &n);
    fact = 1;
    for (i=1; i<=n; i+=1)
    {
        fact = fact * i;
    }
    printf("%d! = %d\n", n, fact);
    return (0);
}
