#include <stdio.h>
#include<stdbool.h>
#include <string.h>
typedef struct
{
char titre[100];
char description[100];
char datedecheance[100];
char priorite[100];
}
tache;
tache A[100];                // A: tableau
int c=0;                   // C: tableau POSITION

void ajouter()  {
 printf(" le titre : ");
 scanf(" %[^\n]",A[c].titre);
 printf(" la descriptin : ");
 scanf(" %[^\n]",A[c].description);
 printf(" la date d echeance  (AAAA/MM/JJ) : ");
 scanf(" %s",A[c].datedecheance);
 printf(" la priorite ( HIGH /  LOW) :  ");
 scanf(" %s",A[c].priorite);
 c++;                       // tableau add position ++
}

void afficher() {
 if (c == 0) {              // LA BOUCLE QUI VERIFIE SI LE TABLEAU EST VIDE
  printf("Aucune tache disponible.\n");
  return;
}
for(int i=0; i<c ; i++){
 printf("\n tache %d :\n", i + 1);  // NUMERO DE LA TACHE QUI Afficher
 printf("-titre: %s\n", A[i].titre);
 printf("-description: %s\n", A[i].description);
 printf("-datedecheance: %s\n", A[i].datedecheance);
 printf("-priorite: %s\n", A[i].priorite);}}

void modifier() {
int M;
 printf("entrez le nombre  de la tache a modifier:");
 scanf("%d",&M);
 if(M >0 && M <= c){
  printf("Nouveau Titre :");
  scanf("%s",A[M].titre);
  printf(" Nouvelle Description :");
  scanf("%s",A[M].description);
  printf("Nouvelle DateDEcheance (YYYY/MM/DD):");
  scanf("%s",A[M].datedecheance);
  printf("Nouvelle priorite (high/low):");
  scanf("%s",A[M].priorite);
  M--;

    }
     else {
     printf(" invalide index !");
    }
}


     int main()
{    int choix;
     do    // POUR AFFICHAIR LR MENU
{
     printf(" -Menu-\n");
     printf("1-Ajouter une Tache\n");
     printf("2-Afficher la Liste des Taches\n");
     printf("3-Modifier une Tache\n");
     printf("4-Supprimer une Tache\n");
     printf("5-Filtrer les Taches\n");
     printf("6-Quitter\n");
     printf("choisissez une option :");
     scanf("%d",&choix);


     switch (choix){      //pour afficher chaque action dans le menu
     case 1:
     printf("Vous avez choisi d'Ajouter une Tache.\n");
     ajouter();
     break;
     case 2:
     printf("Vous avez choisi d'Afficher la Liste des Tahes .\n");
     afficher();
     break;
     case 3:
     printf("Vous avez choisi de Modifier une Tache .\n");
     modifier();
     break;
     case 4:
     printf("Vous avez choisi de Supprimer une Tache .\n");
     break;
     case 5:
     printf("Vous avez choisi de Filtrer les Taches .\n");
     break;
     case 6:
     printf("Quitter .\n");
     default:
     printf("choix invalid \n  ");
}
}
     while(choix!=6);     // ! : TOKHALIF
}
