#ifndef TP5_MESSTRUCTURES_H
#define TP5_MESSTRUCTURES_H

typedef struct
{
    int numerateur, denominateur;
} Rationnel;

Rationnel SaisieRationnel();
void AffichageRationnel(Rationnel r);
Rationnel AdditionRationnel(Rationnel r1, Rationnel r2);
Rationnel MultiplicationRationnel(Rationnel r1, Rationnel r2);
int PgcdRationnel(Rationnel r);
Rationnel SimplifieRationnel(Rationnel r);


#endif //TP5_MESSTRUCTURES_H
