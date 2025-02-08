/*Ce programme permet de résoudre l'équation du second degré
ax² + bx + c = 0*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x0, x1, x2, reel, img;
    printf("ax² + bx + c = 0\n");
    printf("Entrez a = ");
    scanf("%f", &a);
    while (a == 0)
    {
        printf("Ce n'est pas une équation du second degré\n");
        printf("Entrez a = ");
        scanf("%f", &a);
    }
    printf("Entrez b = ");
    scanf("%f", &b);
    printf("Entrez c = ");
    scanf("%f", &c);

    delta = (b*b)-(4*a*c);
    
    if (delta > 0)
    {
        x1 = (-b-sqrt(delta))/(2*a);
        x2 = (-b+sqrt(delta))/(2*a);
        printf("S = { %.2f ; %.2f }\n", x1, x2);
    } else if (delta == 0)
    {
        x0 = (-b)/(2*a);
        printf("S = { %.2f }\n", x0);
    } else 
    {
        reel = (-b)/(2*a);
        img = sqrt(-delta)/(2*a);
        printf("S = { %.2f + %.2fi ; %.2f - %.2fi }\n", reel, img, reel, img);        
    }
    return (0);
}