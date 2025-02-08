/*Ce programme demande deux nombres à l'utilisateur et l'informe
si leur produit est négatif ou positif ou nul */
#include <stdio.h>
int main()
{
    float n1, n2;
    printf("Entrez le premier nombre : ");
    scanf("%f", &n1);
    printf("Entrez le second nombre : ");
    scanf("%f", &n2);
    
    if (n1 < 0 && n2 < 0 || n1 > 0 && n2 > 0)
    {
        printf("Le produit de ces deux nombres est positif\n");
    }
    else if (n1 < 0 && n2 > 0 || n1 > 0 && n2 < 0)
    {
        printf("Le produit de ces deux nombres est négatif\n");
    }
    else
    {
        printf("Le produit de ces deux nombres est nul\n");
    }
    return (0);
}