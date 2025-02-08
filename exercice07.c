/*Ce programme lit trois valeurs saisies par l'utilisateur et affiche leur maximum*/
#include <stdio.h>
int main()
{
    int i;
    float max, n;
    printf("Entrez le nombre numéro 1 : ");
    scanf("%f", &max);
    for (i=2; i<=3; i+=1)
    {
        printf("Entrez le nombre numéro %d : ",i);
        scanf("%f", &n);
        if (n > max)
        {
            max = n;
        }
    }
    printf("%.2f est le nombre maximum\n", max);
    return (0);

}