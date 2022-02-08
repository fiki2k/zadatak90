//Pronadite produkt glavne dijagonale matrice.

#include<stdio.h>

int main()
{
    int G[5][5];
    int i;
    int j;
    int produkt = 1;


    printf("Unesi elemente matrice:\n");
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &G[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        produkt = produkt * G[i][i];
    }
    
    printf("\nProdukt glavne dijagonale je = %d", produkt);

    return 0;
}
