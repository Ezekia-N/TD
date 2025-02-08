/*Ce programme lit deux notes et leurs coefficients qui sont saisies
par l'utilisateur et affiche leur moyenne*/
#include <stdio.h>
int main()
{
    float n1, n2, c1, c2, moy;
    do
    {
    printf("Les deux notes doivent être comprises entre 0 à 20\n");
    printf("Entrez la première note : ");
    scanf("%f", &n1);
    printf("Entrez son coefficient : " );
    scanf("%f", &c1);
    printf("Entrez la deuxième note : ");
    scanf("%f", &n2);
    printf("Entrez son coefficient : " );
    scanf("%f", &c2);
    }
    while (n1 < 0 || n1 > 20 || n2 < 0 || n2 > 20);
    moy = (n1*c1+n2*c2)/(c1+c2);
    printf("La moyenne est %.2f\n", moy);
    return (0);
}
