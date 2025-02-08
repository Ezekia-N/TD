/*Ce programme lit deux notes saisies par l'utilisateur 
et affiche leur somme et leur moyenne */
#include <stdio.h>
int main()
{
    float n1, n2, som, moy;
    do
    {
    printf("Les deux notes doivent être comprises entre 0 et 20\n");
    printf("Entrez la première note : ");
    scanf("%f", &n1);
    printf("Entrez la deuxième note : ");
    scanf("%f", &n2);
    }
    while (n1 < 0 || n1 > 20 || n2 < 0 || n2 > 20);
    som = n1 + n2;
    moy = som / 2;
    printf("La somme de %.2f et de %.2f est égale à %.2f\n", n1, n2, som);
    printf("Leur moyenne est %.2f\n", moy);
    return (0);
}