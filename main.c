#include <stdio.h>
#include "exercices.h"

int main()
{

    printf("=====\tTP5\t=====\n");

    int choixExercice = 0;

    //On demande son choix à l'utilisateur
    printf("Quel exercice voulez-vous lancer ? 1 à 3, 0 pour arrêter\n");

    do
    {
        scanf("%d", &choixExercice);
        switch (choixExercice)
        {
            case 1 :
                exercice1();
                break;
            case 2 :
                exercice2();
                break;
            case 3 :
                exercice3();
                break;
            case 0 :
                break;

            default :
            {
                printf("Choix Invalide ! Veuillez selectionner un exercice :\n");

                break;
            }
        }
    }

    while (choixExercice != 0); //Si choix == 0 on arrête !

    printf("Au revoir !\n");

    return 0;
}