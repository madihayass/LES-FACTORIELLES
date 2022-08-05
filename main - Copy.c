#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,fact ,nb;
    printf("veuillez donner un nombre:");
    scanf("%d",&nb);
    if(nb<0)
        printf("impossible:");
    else;
        fact=1;
        for(i=2;i<=nb;i++)
            fact=fact*i;

    printf("La factorielle est :%d",fact);

    return 0;
}






