#include <stdio.h>
#include <stdlib.h>
int factorielle(int x)
{
    int fact,j;

    fact=1;
    for(j=2;j<=x;j++)
        fact=fact*j;
    return fact;
}
int main()
{
int nombre ;

 do{
    printf("entrez un nomber pour calculer sa factorielle\n");
    scanf("%d" ,&nombre);
 }while(nombre<0);
 printf("la factorielle de %d!=%d \n" ,nombre,factorielle(nombre));
}
