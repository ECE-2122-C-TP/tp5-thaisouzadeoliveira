#include <stdio.h>
#include "exercices.h"
#include "mesTableaux.h"
#include "mesStructures.h"

void exercice1()
{
    Rationnel r1, r2, addition, multiplication, simplification1, simplification2;

    r1=SaisieRationnel();
    r2=SaisieRationnel();

    printf("Le premier rationnel rentré vaut:");
    AffichageRationnel(r1);

    printf("Le deuxieme rationnel rentré vaut:");
    AffichageRationnel(r2);

    addition = AdditionRationnel(r1, r2);
    multiplication = MultiplicationRationnel(r1, r2);
    simplification1 = SimplifieRationnel(r1);
    simplification2 = SimplifieRationnel(r2);

    printf("L'addition des deux rationnels vaut: \n");
    AffichageRationnel(addition);

    printf("La multiplication des deux rationnels vaut: \n");
    AffichageRationnel(multiplication);

    printf("La simplification du premier rationnel vaut: \n");
    AffichageRationnel(simplification1);

    printf("La simplification du deuxieme rationnel vaut: \n");
    AffichageRationnel(simplification2);
}


void exercice2()
{
    int tailleDeRemplissage=0, i=0, valeurCasei=0, plusGrandeValeur=0;
    int tableauExo2[TAILLE_MAX]={0};

    printf("Combien d'entiers voulez-vous insérer dans le tableau? \n Cet entier doit être inférieur à %d\n",
           TAILLE_MAX);
    scanf("%d", &tailleDeRemplissage);

    RemplissageTableau1D(tableauExo2, tailleDeRemplissage);

    plusGrandeValeur = PlusGrandeValeurTableau(tableauExo2, tailleDeRemplissage);

    printf("La plus grande valeur du tableau est: %d\n", plusGrandeValeur);
}


void exercice3()
{
    int i=0, j=0, k=0;
    int tableau_Exo3_2D[TAILLE_1_2D][TAILLE_2_2D]={{0}};
    int tableau_Exo3_1D[TAILLE_1D]={0};

    RemplissageTableau2D(tableau_Exo3_2D);
    CopieTableau1D(tableau_Exo3_2D, tableau_Exo3_1D);

    for (i=0; i<TAILLE_1_2D; i++)
    {
        for (j=0; j<TAILLE_2_2D; j++)
        {
            printf("%d", tableau_Exo3_2D[i][j]);
        }

        printf("\n");
    }


    for (k=0; k<TAILLE_1D; k++)
    {
        printf("%d", tableau_Exo3_1D[k]);
    }
}