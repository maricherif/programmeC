#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int convertir(char code_secret[20])
{
    int cpt = 0;
    for (int i = 0; i < strlen(code_secret); i++)
    {
        if (code_secret[i] >= '0' && code_secret[i] <= '9')
        {
            cpt++;
        }
    }
    if (cpt == strlen(code_secret))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

  
    int tab[3] = {1111, 2222, 3333}, inpConvert;
    char code_secret[20];
    int i = 0, j = 0;


        printf("entrez votre code secret:  ");
        scanf("%s", code_secret);
    while (i<= 2)
    {

        if (convertir(code_secret))
        {
           
            inpConvert = atoi(code_secret);
            while (j < 3)
            {
                if (tab[j] == inpConvert)
                {
                     printf("Code secret correct...");
                     return 0;
                }
                
                j++;
            }
            if (i == 0)
            {
                printf("le code est incorrect\n Reessayer: ");
                scanf("%s", code_secret);
            }
            else if (i == 1)
            {
                printf("le code est incorrect\n il vous reste un seul essai: ");
                scanf("%s", code_secret);
            }
            else
            {
                printf("Fin des tentatives , Compte bloque");
                return 0;
            }
            

        }else
        {
            if (i == 0)
            {
                printf("veillez saisir des entiers\n Reessayer: ");
                scanf("%s", code_secret);
            }
            else if (i == 1)
            {
                printf("veillez saisir des entiers\n il vous reste un seul essai: ");
                scanf("%s", code_secret);
            }
            else
            {
                printf("Fin des tentatives , Compte bloque");
                return 0 ;
            }
        }
        
         
        
        i++;
    }
    
    return 0;
}
