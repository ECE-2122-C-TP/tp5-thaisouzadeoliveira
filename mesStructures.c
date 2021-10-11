#include <stdio.h>
#include "mesStructures.h"

// On demande à l'utilisateur de rentrer un rationnel

Rationnel SaisieRationnel()
{
  Rationnel r;

  printf("Veillez rentrer le nominateur et le dénominateur du rationnel: ");
  scanf("%d %d", &r.numerateur, &r.denominateur);

  return r;
}


void AffichageRationnel(Rationnel r)
{
    printf("%d / %d\n\n", r.numerateur,r.denominateur);
}


Rationnel AdditionRationnel(Rationnel r1, Rationnel r2)
{
    int numerateur, denominateur;
    Rationnel r;

    numerateur= r1.numerateur * r2.denominateur + r2.numerateur * r1.denominateur;
    denominateur= r1.denominateur * r2.denominateur;

    r.numerateur= numerateur;
    r.denominateur= denominateur;

    return r;
}


Rationnel MultiplicationRationnel(Rationnel r1, Rationnel r2)
{
    int numerateur, denominateur;
    Rationnel r;

    numerateur= r1.numerateur * r2.numerateur;
    denominateur= r1.denominateur * r2.denominateur;

    r.numerateur=numerateur;
    r.denominateur=denominateur;

    return r;
}

int PgcdRationnel(Rationnel r)
{
    int a=r.numerateur, b=r.denominateur, resteSoustraction=0;

    do
    {
        resteSoustraction=a-b;
        a=b;
        b=resteSoustraction;

    }

    while (resteSoustraction>0);

    if (resteSoustraction==0)
    {
        return a;
    }

    else
    {
        return 0;
    }
}


Rationnel SimplifieRationnel(Rationnel r)
{
    int pgcd=0;

    pgcd= PgcdRationnel(r);

    if (pgcd>0)
    {
        r.numerateur= r.numerateur/pgcd;
        r.denominateur= r.denominateur/pgcd;
    }

    return r;
}


