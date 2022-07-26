#include <stdio.h>
#include <stdlib.h>

int main()
{
    char prenom[80]= " ";
    char nom[80]= " ";
    int somMath = 0;
    int somFR = 0;
    int somANG = 0;
    int ANG[2];  // ANG coef 3
    int FR[2];   // FR coef 3
    int Math[2]; // math coef 4
    float MoyGEN, moyMath, moyFR, moyANG;
    int i;
    printf("entrez votre prenom et nom: ");
    scanf("%s %s", prenom, nom);
    printf("%s %s ", prenom, nom);
    printf(" donnez vos notes en MATH, Francais et Anglais SVP!!\n");

    // MATHs
    for (i = 0; i < 2; i++)
    {
        printf("Math note %d: ", i + 1);

        scanf("%d", &Math[i]);
        if (Math[i] > 20 || Math[i] < 0)
        {
            printf("vous devez saisir un nombre compris entre 0 et 20.\n");
            return 0;
        }

        somMath = somMath + Math[i];
    }
    moyMath = (somMath / 2);
    // Francais
    for (i = 0; i < 2; i++)
    {
        printf("Francais note %d: ", i + 1);
        scanf("%d", &FR[i]);
        if (FR[i] > 20 || FR[i] < 0)
        {
            printf("vous devez saisir un nombre compris entre 0 et 20.\n");
            return 0;
        }

        somFR = somFR + FR[i];
    }
    moyFR = (somFR / 2);
    // ANGLAIS
    for (i = 0; i < 2; i++)
    {
        printf("Anglais note %d: ", i + 1);
        scanf("%d", &ANG[i]);
        if (ANG[i] > 20 || ANG[i] < 0)
        {
            printf("vous devez saisir un nombre compris entre 0 et 20. \n");
            return 0;
        }

        somANG = somANG + ANG[i];
    }
    moyANG = (somANG / 2);

    MoyGEN = ((moyMath * 4) + (moyFR * 3) + (moyANG * 3)) / 10;
    printf("%s %s votre moyenne générele de  est %.2lf : ", prenom, nom, MoyGEN);
    if (MoyGEN == 10)
    {
        printf("Passable\n");
        return 0;
    }
    if (MoyGEN == 12 && MoyGEN <= 14)
    {
        printf("tres bien\n");
        return 0;
    }
    if (MoyGEN < 10)
    {
        printf("mediocre\n");
        return 0;
    }
    else if (MoyGEN > 14)
    {
        printf("excellent travail\n");
        return 0;
    }

    return 0;
}