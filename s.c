#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#define max 100

struct Etudiant {
    int matricule;
    char nom[50];
    char prenom[50];
} 
Etudiant Etudiants[max];

void main(){
    int nE = 0, 
    ajout_Etudiant(Etudiants,&nE);
}

void ajout_Etudiant(Etudiants int *nE)
{
    int matricule;
    char nom[50];
    char prenom[50];
    int e;
    if (*nE == max)
    {
        printf("vous avez ajouter le maximum d\'etudiant :( ");
    }
    else
    {
        printf("entrer le matricule");
        scanf("%d", &matricule);
        e = existe(matricules, nE, matricule);
        if (e == 0)
        {
            printf("le matricule existe deja ");
        }
        else
        {
            printf("entrer le nom");
            scanf("%s", &Etudiants[*nE].nom);
            printf("entrer le prenom");
            scanf("%s", &Etudiants[*nE].prenom);
            Etudiants[*nE].matricule = matricule;
            (*nE)++;
        }
    }
}
int existe(Etudiant Etudiants[max], int nE, int matricule)
{
    int i, e = -1;
    for (i = 0; i < nE; i++)
    {
        if (Etudiants[i].matricule == matricule)
        {
            e = i;
        }
    }
    if (e == -1)
    {
        return 0;
    }
    else
    {
        return e;
    }
}

int existse(int matricules, int nE, int matricule)
{
    int i, e = -1;
    for (i = 0; i < nE; i++)
    {
        if (matricules[i] == matricule)
        {
            e = i;
        }
    }
    if (e == -1)
    {
        return 0;
    }
    else
    {
        return e;
    }
}

void ajoute_Etudiant(Etudiants int *nE)
{
    int matricule;
    char nom[50];
    char prenom[50];
    int e;
    if (*nE == max)
    {
        printf("vous avez ajouter le maximum d\'etudiant :( ");
    }
    else
    {
        printf("entrer le matricule");
        scanf("%d", &matricule);
        e = existe(matricules, nE, matricule);
        if (e == 0)
        {
            printf("le matricule existe deja ");
        }
        else
        {
            printf("entrer le nom");
            scanf("%s", &Etudiants[*nE].nom);
            printf("entrer le prenom");
            scanf("%s", &Etudiants[*nE].prenom);
            Etudiants[*nE].matricule = matricule;
            (*nE)++;
        }
    }
}





