#ifndef TP5_MESTABLEAUX_H
#define TP5_MESTABLEAUX_H


//////////////// EXO 2 ///////////////

#define TAILLE_MAX 100

void RemplissageTableau1D(int tableau[TAILLE_MAX], int tailleDeRemplissage);

int PlusGrandeValeurTableau(int tableau[TAILLE_MAX], int tailleDeRemplissage);



/////////////// EXO 3 ////////////////

#define TAILLE_1_2D 3
#define TAILLE_2_2D 4
#define TAILLE_1D TAILLE_1_2D*TAILLE_2_2D


void RemplissageTableau2D(int tableau2D[TAILLE_1_2D][TAILLE_2_2D]);
void CopieTableau1D(int tableau2D[TAILLE_1_2D][TAILLE_2_2D], int tableau1D[TAILLE_1D]);


#endif //TP5_MESTABLEAUX_H
