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
int c=0;                     // C: tableau POSITION

void ajouter()  {
 printf(" le titre : ");
 scanf(" %[^\n]",A[c].titre);
 printf(" la description : ");
 scanf(" %[^\n]",A[c].description);
 printf(" la date d echeance  (AAAA/MM/JJ) : ");
 scanf(" %s",A[c].datedecheance);
 printf(" la priorite ( HIGH /  LOW) :  ");
 scanf(" %s",A[c].priorite);
 c++;                              // tableau add position ++
}

void afficher() {
 if (c == 0) {                     // LA BOUCLE QUI VERIFIE SI LE TABLEAU EST VIDE
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
 printf("entrez le nombre  de la tache a modifier:" );
 scanf("%d",&M);
 if(M >0 && M <= c){
  M--;
  printf("Nouveau Titre :");
  scanf(" %[^\n]",A[M].titre);
  printf(" Nouvelle Description :");
  scanf(" %[^\n]",A[M].description);
  printf("Nouvelle Date d echeance (AAAA/MM/JJ):");
  scanf("%s",A[M].datedecheance);
  printf("Nouvelle priorite (HIGH/LOW):");
  scanf("%s",A[M].priorite);
    }
     else {
     printf(" invalide !");
    }
}

void supprimer(){
int s;             //S:POUR STOCKER LE N° DE LA TACHE A SPRM
 printf("Entrez le numero de la tache a supprimer (1 à %d): ", c);
 scanf("%d", &s);
 if (s < 1 || s > c) {
  printf("Tache invalide.\n");
  return;
    }
  for (int i = s; i < c - 1; i++) {
   A[i] = A[i + 1];}
   printf("Tache supprimer avec succes.\n");
  c--;}

void Filtrer()  {
 char priorite[100];
 printf("Entrez la priorite a filtrer (HIGH/LOW) : ");
 scanf("%s",priorite);
 for(int i=0; i<c ; i++){
  if(strcmp( A[i].priorite,priorite)==0){     //  STRCMP=COMPARER ENTRER DEUX CHAIN DE CARACTERE
     printf("\n tache %d :\n", i + 1);        //  NUMERO DE LA TACHE QUI Afficher
     printf("-titre: %s\n", A[i].titre);
     printf("-description: %s\n", A[i].description);
     printf("-datedecheance: %s\n", A[i].datedecheance);
     printf("-priorite: %s\n", A[i].priorite);
}}}

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
     printf("Vous avez choisi d Ajouter une Tache.\n");
     ajouter();
     break;
     case 2:
     printf("Vous avez choisi d Afficher la Liste des Tahes .\n");
     afficher();
     break;
     case 3:
     printf("Vous avez choisi de Modifier une Tache .\n");
     modifier();
     break;
     case 4:
     printf("Vous avez choisi de Supprimer une Tache .\n");
     supprimer();
     break;
     case 5:
     printf("Vous avez choisi de Filtrer les Taches .\n");
     Filtrer();
     break;
     case 6:
     printf("Quitter .\n");
     default:
     printf("choix invalid \n  ");
}
}
     while(choix!=6);     // ! : TOKHALIF
}


