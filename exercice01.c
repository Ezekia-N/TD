/*Ce programme demande un nombre à l'utilisateur et l'informe
 si ce nombre est positif ou négatif ou nul*/
#include <stdio.h>
int main()
{
    float n;
    printf("Entrez un nombre : ");
    scanf("%f", &n);
    if (n > 0)
    {
        printf("%.2f est positif\n",n);
    }
    else if (n < 0)
    {
        printf("%.2f est négatif\n",n);
    }
    else
    {
        printf("%.2f est nul\n",n);
    }
    return (0);
}