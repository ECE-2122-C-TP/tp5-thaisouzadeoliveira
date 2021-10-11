#include <stdio.h>
#include "mesTableaux.h"

/////////////// EXO 2 ///////////////


void RemplissageTableau1D(int tableau[TAILLE_MAX], int tailleDeRemplissage)
{
    int i=0, valeurCasei=0;

    for (i=0; i<tailleDeRemplissage; i++)
    {
        printf("Rentrez la valeur à insérer dans la case n°%d: \n", i+1);
        scanf("%d", &valeurCasei);
        tableau[i]=valeurCasei;
    }
}

int PlusGrandeValeurTableau(int tableau[TAILLE_MAX], int tailleDeRemplissage)
{
    int i=0, plusGrandeValeur=0;

    for (i=0; i<tailleDeRemplissage; i++)
    {
        if (tableau[i]>plusGrandeValeur)
        {
            plusGrandeValeur = tableau[i];
        }

    }

    return plusGrandeValeur;
}



/////////////// EXO 3 ////////////////


void RemplissageTableau2D(int tableau2D[TAILLE_1_2D][TAILLE_2_2D])
{
    int i=0, j=0, valeurCaseij=0, nbLignes=TAILLE_1_2D, nbColonnes=TAILLE_2_2D;

    for (i=0; i<nbLignes; i++)
    {
        for (j=0; j<nbColonnes; j++)
        {
            printf("Rentrez la valeur à insérer dans la case ligne %d, colonne %d: \n", i, j);
            scanf("%d", &valeurCaseij);
            tableau2D[i][j]= valeurCaseij;
        }
    }
}


void CopieTableau1D(int tableau2D[TAILLE_1_2D][TAILLE_2_2D], int tableau1D[TAILLE_1D])
{
   int  i=0, j=0, k=0, valeurCaseij=0, nbLignes=TAILLE_1_2D, nbColonnes=TAILLE_2_2D;

    for (i=0; i<nbLignes; i++)
    {
        for (j=0; j<nbColonnes; j++)
        {
            valeurCaseij= tableau2D[i][j];
            tableau1D[k]= valeurCaseij;
            k=k+1;
        }
    }
}



