#include <stdio.h>
#include <stdlib.h>
#include "include/cinema.h"

int nb=0 ;
int c =0;
int k=0 ;
admin * tb ;
salle *initialise_salle (){

printf("\n\n   (^_^)-->veuillez saisir combien de salles  le cinema possede : ");
scanf("%d",&nb) ;

salle * tab = malloc(nb*sizeof(salle));
if (tab == NULL)
    printf("\n\n (-_-) -->EREURE d'allocation \n") ;
for (int i=0 ;i<nb ;i++){
  printf("\n\n--------------<...Saisir les informations de la salle  %d : ...>------------- ",i+1);
    printf("\n\n (^_^) -->veuillez saisir le numero de la salle  : ");
    scanf("%d",&tab[i].numero) ;
    printf("\n\n (^_^) -->veuillez saisir nombre de siege de la salle %d : ",tab[i].numero);
    scanf("%d",&tab[i].nbr_dispSeige) ;
    tab[i].nbr_reservSeige=0 ;
}
return tab ;
}
salle * reservation_seige (salle * tab){

int num ,nbr ,i;
char nom[50];

if(nb==0){
     printf("\n\n -------------<...(-_-): Aucunne salle existe pour la reservation   : ....>---------------\n",i+1);
  return tab ;
}
      printf("\n\n (^-^) -->veuillez saisir le numero de salle  : ");
      scanf("%d",&num) ;
    for(i=0 ;i<nb;i++){
      if(tab[i].numero==num){
       if(tab[i].nbr_dispSeige>0){
        printf("\n\n (^-^) -->veuillez saisir votre nom complet (nom et prenom )  : ");
        scanf(" %[^\n]s",&nom) ;
        printf("\n\n (^-^) -->veuillez saisir nombre de siege a reservee  de salle %d : ",num);
       scanf("%d",&nbr) ;
    while(nbr>(tab[i].nbr_dispSeige) || nbr <=0){
     printf("\n\n (-_-) !! Chiox invalide ce nombre de seige n'est pas disponible !! \n\n (^-^) -->veuillez saisir un  nombre de siege a reservee  compris entre '1' et '%d' : ",tab[i].nbr_dispSeige);
    scanf("%d",&nbr) ;
    }
    tab[i].nbr_reservSeige+=nbr ;
    tab[i].nbr_dispSeige-=nbr;
       if(k==0)
    tb=malloc(sizeof(admin));

    tb=realloc(tb,(k+1)*sizeof(admin)) ;
     sprintf(tb[k].nom,nom);
     tb[k].numero_salle=num ;
      tb[k].siege_reserv=nbr;

     sprintf(tb[k].id,"A00%d",c+1);


      printf("\n\n \t (^_^)--> Reservation avec success de %d sieges ,voici votre code de reservation : ( %s )  . \n\n",nbr,tb[k].id);
    c++ ;
    k++ ;
      }
      else
           printf("\n\n (-_-) !! Chiox invalide !!--> aucunne seige est disponible pour la reservation dans ls salle de numero %d . \n",num);
      break ;
      }
    }
     if(i==nb)
    printf("\n\n (-_-) !! Chiox invalide !! --> Cette salle de numero %d n'existe pas au cinema. \n",num);

return tab;
}
salle * annulation_reservation (salle* tab){
int num ;
int j ,nbr,l;
char nom[77];
char nom_comp[77];
char id[50] ;

if(k==0){
  printf("\n\n -------------<...(-_-): Aucunne reservation existe pour l'annulation  : ....>---------------\n");
 return tab ;
}
       printf("\n\n (^-^)-->Veuillez saisir votre nom complet (nom et prenom) : ");
      scanf(" %[^\n]s",&nom_comp) ;
      printf("\n\n (^-^)-->Veuillez saisir le code de reservation : ");
      scanf(" %s",id) ;
      printf("\n\n (^-^)-->Veuillez saisir le numero de salle qui vous avez reservee : ");
      scanf(" %d",&num) ;
for(l=0;l<nb;l++){
if(tab[l].numero==num){
  for(j=0;j<k ;j++){
    if(strcmp(tb[j].id,id)==0 && strcmp(tb[j].nom,nom_comp)==0){
        if(tb[j].numero_salle == num ) {

            if(tb[j].siege_reserv>0){
    printf("\n\n -->veuillez saisir nombre de siege pour annullee leurs reservation de la salle ' %d ' : ",num);
    scanf("%d",&nbr) ;
    while(nbr>(tb[j].siege_reserv) || nbr< 0 ){
     printf("\n\n (-_-) !! Chiox invalide,ce nombre de place n'est pas reservee !! \n\n -->veuillez saisir un  nombre de place a annullee  compris entre '0' et '%d' : ",tb[j].siege_reserv);
    scanf("%d",&nbr) ;
    }
    tb[j].siege_reserv-=nbr ;
    tab[l].nbr_reservSeige-=nbr ;
    tab[l].nbr_dispSeige+=nbr ;
    if(tb[j].siege_reserv==0){
      for(int p=j;p<k-1;p++)
        tb[p]=tb[p+1] ;

       k-- ;
     tb=realloc(tb,k*sizeof(admin));
     printf("\n\n \t      (^_^)--> Annullation  avec success de tous les places a reservee ( %d ) \n\t   ,c-a-d : vous etes ignoree de la liste des reservateurs de la salle numero ' %d ' . \n\n",nbr,num);
   return tab ;
       }

      printf("\n\n \t (^_^)--> Annullation  avec success de reservation de %d seige de la salle numero %d  . \n\n",nbr,num);
     return tab ;
      }


      }
       else
           printf("\n\n  \t (-_-) : !! Chiox invalide !! --> Cette salle de numero (%d) n'est pas reservee en fonction de ce code de reservation (%s) ,\n \t\t et en fonction de ce nom ' %s ',\n\t\t--> le numero de la salle reservee pour ce code de reservation  et ce nom est ' %d ' .\n",num,tb[j].id,tb[j].nom,tb[j].numero_salle);
     break ;
           }

            }

            if(j==k)
      printf("\n\n -----<...(-_-) : !! Chiox invalide !! --> Le Code de reservation (%s) ou Votre Nom ('%s') n'est pas correct (ou bien les deux  ) ! ...>------\n",id,nom_comp);
break ;
}

  }

        if(l==nb)
           printf("\n\n --------<...(-_-) : !! Chiox invalide !! --> Cette salle de numero ( %d ) n'existe pas dans la liste des salles de cinema ! ...>---------\n",num);
return tab ;
  }

void  Affichage_salles (salle* tab){
if(nb==0){
  printf("\n\n -------------<...(-_-): la liste des salles dont  le cinema possede est vide  : ....>---------------\n");
  return ;
    }
printf("\n\n ----------------<...(^_^): Affichage des salles dont le cineme possede  : ....>---------------\n");
for (int i=0 ;i<nb ;i++){
      printf("\n\n --------------<.. la salle %d : ....>-------------\n\n",i+1);
    printf(" --> Numero de la salle : %d \n\n",tab[i].numero);
    printf(" --> Nombre de siege a reservee  : %d \n\n",tab[i].nbr_reservSeige);
     printf(" --> Nombre de siege disponibles : %d \n\n",tab[i].nbr_dispSeige);

}
   printf("\n -------------------------------------------<...(^_^)...>----------------------------------------\n\n");
 }
 void  Affichage_reservateur(){
    if(k==0){
  printf("\n\n -------------<...(-_-): la liste de reservations des utilisateurs est vide  : ....>---------------\n");
  return ;
    }
 printf("\n\n -------------<...(^_^): Affichage des reservateurs  : ....>---------------\n");
for (int j=0 ;j<k ;j++){

    printf("\n-----> Le reservateur %d : \n",j+1);
    printf(" --> Nom de reservateur  : %s \n",tb[j].nom);
    printf(" --> Numero de la salle a reservee  : %d \n",tb[j].numero_salle);
    printf(" --> Code de reservation  : %s \n",tb[j].id);
    printf(" --> Nombre de siege a reservees  : %d \n",tb[j].siege_reserv);

}
printf("\n -----------------------------------<...(^_^)...>------------------------------------\n\n");
}
