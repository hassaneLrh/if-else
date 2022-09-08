#include<stdio.h>
#include<stdlib.h>

int main()
{
    float T;
    printf("veuillezentrez la temperature :");
    scanf("%f",&T);
    if(T<0)
        printf("l'etat de l'eau est glace");
    else if (T>100)
        printf("l'etat de l'eau est vapeur");

    else printf("l'etat de l'eau est liquide");

    return 0;

}
