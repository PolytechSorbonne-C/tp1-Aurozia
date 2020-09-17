#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int x,y;
    int k;

    printf("x : ");
    scanf("%d", &x);
    printf("k : ");
    scanf("%d", &k);

    y = x;

    if (k>=0)
    {
        for(i=1;i<k;i++)
        {
            x=x*y;
        }
        printf("Résultat : %d\n", x);
    }
    else
        printf("k valeur negative saisie\n");
    return 0;
}