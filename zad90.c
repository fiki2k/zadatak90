//Pronadite produkt glavne dijagonale matrice.

#include<stdio.h>

int main()
{
    int M[5][5];
    int i;
    int j;
    int produkt = 1;


    printf("Unesi elemente matrice:\n");
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        produkt = produkt * M[i][i];
    }
    
    printf("\nProdukt glavne dijagonale je = %d", produkt);

    return 0;
}
