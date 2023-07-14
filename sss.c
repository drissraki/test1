#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#define MAX 100



void afficherMenuPrincipal() {
    printf("\n----- Menu Principal -----\n\n\n");
    printf("   1 Gestion\n");
    printf("   2 Consultation\n");
    printf("   3 Quitter\n");
}
void afficherMenuGestion() {
    printf("\n----- Menu Gestion -----\n\n\n");
    printf("   1. Ajouter un Etudiant\n");
    printf("   2. Modifier un Etudiant\n");
    printf("   3. Ajouter notes par Etudiant\n");
    printf("   4. Qu    itter\n");
    printf("   5. Retour\n");
}


void Menumodifieretudiant() {
    printf("\n-----  MODIFIER UN ETUDIANT -----\n\n\n");
    printf("   1. modifier la matricule \n");
    printf("   2. modifier le nom et le prenom \n");    
    printf("   3. Retour\n");
    printf("   4. Quitter\n");

}

    void menuconsultation() {
        printf("\n----- Menu consultation  -----\n\n\n");
        printf("   1. liste de notes par matiere \n");
        printf("   2. bulletin par etudiant \n");
        printf("   3. Quitter\n");
        printf("   4. Retour\n");


    }




int existeEtudiant(int matricules[max], int nbEtudiants, int matricule) {
    int i;
    for (i=0; i<nbEtudiants; i++) {
        if (matricule == matricules[i]) {
            return 1;
        }
    }
    return 0;
}









void ajouterEtudiant(int matricules[max], char noms[max][50], char prenoms[max][50], int* nbEtudiants) {

    int matricule;
    char nom[50];
    char prenom[50];
    int i;

    if (*nbEtudiants == max) {
        printf("La liste d'Etudiants est pleine. Impossible d'ajouter un nouvel Etudiant.\n");
        return;
    }
    printf("\n----- Ajouter un Etudiant -----\n");
   do{ printf("Matricule : ");
    scanf("%ld",&matricule);
   }while(matricule>9999999999||matricule<0);
    for (i=0;i< *nbEtudiants;i++){
        if (matricule==matricules[i])
            {
            printf("Le matricule existe \n");
            return;
        }
    }
    printf("Nom : ");
    scanf("%s",&nom);
    printf("Prenom : ");
    scanf("%s",&prenom);
    matricules[*nbEtudiants]=matricule;
    strcpy(noms[*nbEtudiants], nom);
    strcpy(prenoms[*nbEtudiants], prenom);

    (*nbEtudiants)++;


}





















void modifierEtudiant(int matricules[max], char noms[max][50], char prenoms[max][50], int nbEtudiants) {

      int matricule;
      char nouveauNom[50];
      char nouveauPrenom[50];
      int Existe = -1;
      int i;

    if (nbEtudiants == 0) {
        printf("La liste d'etudiants est vide.\n");
        return;
    }



    printf("\n----- Modifier un Etudiant -----\n\n\n");
    printf("Matricule de l'etudiant a modifier : ");
    scanf("%ld", &matricule);


    for (i=0;i<nbEtudiants; i++) {
        if (matricule == matricules[i]) {
            Existe = i;
            break;
        }
    }

    if (Existe == -1) {
        printf("Aucun etudiant trouve avec ce matricule.\n");
        return;
    }

    printf("Nouveau nom : ");
    scanf("%s",&nouveauNom);

    printf("Nouveau prenom : ");
    scanf("%s",&nouveauPrenom);

    strcpy(noms[Existe], nouveauNom);
    strcpy(prenoms[Existe], nouveauPrenom);
    clrscr();
}

















void modifiermatricule(int matricules[max], int nbEtudiants) {

      int matricule;
    int nouveaumatricule;
      int Existe = -1;
      int i;

    if (nbEtudiants == 0) {
        printf("La liste d'etudiants est vide.\n");
        return;
    }



    printf("\n----- Modifier MATRICULE -----\n\n\n");
    printf("Matricule de l'etudiant a modifier : ");
    scanf("%ld", &matricule);


    for (i=0;i<nbEtudiants; i++) {
        if (matricule == matricules[i]) {
            Existe = i;
            break;
        }
    }

    if (Existe == -1) {
        printf("Aucun etudiant trouve avec ce matricule.\n");
        return;
    }

    printf("Nouveau matricule : ");
    scanf("%ld",&nouveaumatricule);

    matricules[Existe]=nouveaumatricule;



    clrscr();
}





















void Ajouternote(int matricules[max], float notesetudiants[max][5],int nbEtudiants) {

      int matricule;

      int Existe = -1;
      int i;

    if (nbEtudiants == 0) {
        printf("La liste d'etudiants est vide.\n");
        return;
    }



    printf("\n----- AJOUTER DES NOTES ------\n\n\n");
    printf("Matricule de l'etudiant : ");
    scanf("%ld", &matricule);


    for (i=0;i<nbEtudiants; i++) {
        if (matricule == matricules[i]) {
            Existe = i;
            break;
        }
    }

    if (Existe == -1) {
        printf("Aucun etudiant trouve avec ce matricule.\n");

        return;
    }

    do{
        printf("FRANCAIS : ");
    scanf("%f",&notesetudiants[Existe][0]);
    }while(notesetudiants[Existe][0]<0 || notesetudiants[Existe][0]>20);
    do{  printf("\n ANGLAIS : ");
    scanf("%f",&notesetudiants[Existe][1]);
     }while(notesetudiants[Existe][1]<0 || notesetudiants[Existe][1]>20);

    do{  printf("\n INFORMATIQUE : ");
    scanf("%f",&notesetudiants[Existe][2]);
     }while(notesetudiants[Existe][2]<0 || notesetudiants[Existe][2]>20);
     do{ printf("\n ELECTRICITE : ");
    scanf("%f",&notesetudiants[Existe][3]);
     }while(notesetudiants[Existe][3]<0 || notesetudiants[Existe][3]>20);
     do{  printf("\n CIRCUIT NUMERIQUE : ");
    scanf("%f",&notesetudiants[Existe][4]);
     }while(notesetudiants[Existe][4]<0 || notesetudiants[Existe][4]>20);
     do { printf("\n DROIT: ");
    scanf("%f",&notesetudiants[Existe][5]);
     }while(notesetudiants[Existe][5]<0 || notesetudiants[Existe][5]>20);

    notesetudiants[Existe][6]=((notesetudiants[Existe][0]*1.5)+(notesetudiants[Existe][1]*1.5)+(notesetudiants[Existe][2]*3)+(notesetudiants[Existe][3]*2)+(notesetudiants[Existe][4]*2)+(notesetudiants[Existe][5]))/11;



        


}

















void Moyenne( float notesetudiants[max][5],int nbEtudiants,char noms[max][50], char prenoms[max][50] ){

     int i,a;
     float moyenne = 0 ;
     int matiere ;
     float max ;


    if (nbEtudiants == 0) {
        printf("La liste d'Etudiants est vide.\n");
        return;
    }
do{
 printf("\n----- MOYENNE DES NOTES -----\n");
    printf("Votre choix matiere  :\n 1: francais\n 2: anglais\n 3: informatique\n 4: electricite\n 5: circuit Numerique\n 6: droit\n  Votre choix matiere  :");
    scanf("\t\t\t\t %d",&matiere);
}while( matiere<0&&matiere>7);


     max=notesetudiants[0][matiere];
     for (i=0; i<nbEtudiants ; i++){
          if(notesetudiants[i][matiere]>max){
            max=notesetudiants[i][matiere];
                a=i;
          }
         moyenne=notesetudiants[i][matiere]+moyenne;
     }

  printf("\n LA MOYENNE DE LA MATIERE EST : %.2f \n",(moyenne/(nbEtudiants)));


  printf("la note la plus eleve de cette matiere  est(%.2f)de l'etudiant :\n  %s\t%s",max,noms[a],prenoms[a]);


}


void clignoterRedoublant() {
    int i;
    int x = 50; // Horizontal position
    int y = 23; // Vertical position

    for (i = 0; i < 9999999999; i++) {
        gotoxy(x, y);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
        printf("REDOUBLANT");
        Sleep(700);
        gotoxy(x, y);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
        printf("           ");
        Sleep(120);
    }
}










void bulletinS(int matricules[max],float notesetudiants[max][5] ,float bulletin[max], int nbEtudiants,char noms[max][50], char prenoms[max][50]) {

      int matricule;
      int Existe = -1;
      int i;

    if (nbEtudiants == 0) {
        printf("La liste d'Etudiants est vide.\n");
        return;
    }



    printf("\n-----BULLETIN -----\n\n\n");
    printf("Matricule de l'etudiant : ");
    scanf("%ld", &matricule);


    for (i=0;i<nbEtudiants; i++) {
        if (matricule == matricules[i]) {
            Existe = i;
            break;  
        }
    }

    if (Existe == -1) {
        printf("Aucun etudiant trouve avec ce matricule.\n");
        return;
    }
printf("bulletin de l'etudiant : %s %s \n",noms[Existe],prenoms[Existe]);
 bulletin[Existe]=((notesetudiants[Existe][0]*1.5)+(notesetudiants[Existe][1]*1.5)+(notesetudiants[Existe][2]*3)+(notesetudiants[Existe][3]*2)+(notesetudiants[Existe][4]*2)+(notesetudiants[Existe][5]))/11;

    printf("\n FRANCAIS           :  %.2f\n",notesetudiants[Existe][0]);
    printf("\n ANGLAIS            :  %.2f\n",notesetudiants[Existe][1]);
    printf("\n INFORMATIQUE       :  %.2f\n",notesetudiants[Existe][2]);
    printf("\n ELECTRICITE        :  %.2f\n",notesetudiants[Existe][3]);
    printf("\n CIRCUIT NUMERIQUE  :  %.2f\n",notesetudiants[Existe][4]);
    printf("\n DROIT              :  %.2f\n",notesetudiants[Existe][5]);


    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Bulletin : %.2f  \t",bulletin[Existe]);

     if  (bulletin[Existe]<10)
     { clignoterRedoublant();}
    else if (bulletin[Existe]<12){
           printf(" PASSABLE");}
    else if(bulletin[Existe]<15){
         printf(" ASSER BIEN");}
    else if(bulletin[Existe]<16){
          printf(" BIEN");}
    else
        {printf(" TRES BIEN");}


}










void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

























int main() {
int i,j;
int choixPrincip    al,choixGestion;
float notesetudiants[max+2][6];
int matricules[max];
char noms[max][50];
char prenoms[max][50];
int nbEtudiants = 0;
int choixmodifiere  tudiant;
int choixconsultation;
int bulletin[max];

char matieres[6][50]={"francais","anglais","informatique","electricite","circuit numerique","droit"};






















  do{afficherMenuPrincipal();
        gotoxy(50,10);printf("Votre choix : ");
        scanf("%d", &choixPrincipal);


        switch (choixPrincipal) {
            case 1:clrscr();

                              do{afficherMenuGestion();
                              gotoxy(50,10);printf("Votre choix : ");
                              scanf("%d", &choixGestion);
                              switch (choixGestion) {
                                     case 1:clrscr();
                                            ajouterEtudiant (matricules, noms, prenoms, &nbEtudiants);
                                            clrscr();
                                            break;
                                     case 2:clrscr();
                                             do{ Menumodifieretudiant();
                                             gotoxy(50,10);printf("Votre choix : ");
                                             scanf("%d", &choixmodifieretudiant);

                                                       switch (choixmodifieretudiant){
                                                               case 1:clrscr();
                                                                      modifiermatricule(matricules,nbEtudiants);
                                                                      break;
                                                               case 2:clrscr();
                                                                      modifierEtudiant(matricules, noms, prenoms, nbEtudiants);
                                                                      break;
                                                               case 3:clrscr();
                                                                      break;
                                                               case 4:
                                                                      printf("Merci d'utiliser ce programme \n");
                                                                      getch();
                                                                      return 0;
                                                                      break;
                                                               default:clrscr();
                                                                       printf("Choix invalide. Veuillez rÃ©essayer.\n");
                                                                    }
                                                }while(choixmodifieretudiant != 3);
                                            break;


                                     case 3:clrscr();
                                            Ajouternote( matricules, notesetudiants,nbEtudiants);
                                             getch();
                                            clrscr();
                                            break;
                                     case 4:
                                            printf("Merci d'utiliser ce programme \n");
                                            getch();
                                            return 0;

                                     case 5:clrscr();
                                            break;

                                    default:clrscr();
                                            printf("Choix invalide. Veuillez rÃ©essayer.\n");

                     }
                     } while(choixGestion != 5);



                   break;
          case 2:  clrscr();

                   do{ menuconsultation();
                                             gotoxy(50,10);printf("Votre choix : ");
                                             scanf("%d", &choixconsultation);

                                                       switch (choixconsultation){
                                                               case 1:clrscr();
                                                                      Moyenne( notesetudiants, nbEtudiants, noms, prenoms );
                                                                      getch();
                                                                      clrscr();
                                                                      break;
                                                               case 2:clrscr();
                                                                      bulletinS( matricules,notesetudiants , bulletin, nbEtudiants,noms,prenoms);
                                                                       getch();
                                                                      clrscr();
                                                                      break;
                                                               case 3:

                                                                     printf("Merci d'utiliser ce programme \n");
                                                                      getch();
                                                                      return 0;
                                                                      break;
                                                               case 4:clrscr();
                                                                    break;
                                                               default:clrscr();
                                                                       printf("Choix invalide. Veuillez rÃ©essayer.\n");
                                                                    }
                                                }while(choixmodifieretudiant != 4);

                                                               break;
        case 3:printf("Merci d'utiliser ce programme \n");
                getch();
                return 0;
        default:clrscr();
                printf("Choix invalide. Veuillez rÃ©essayer.\n");

                }
                } while (choixGestion != 3);










    return 0;
}
