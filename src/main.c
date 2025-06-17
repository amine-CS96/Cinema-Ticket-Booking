#include <stdio.h>
#include <stdlib.h>
#include "include/cinema.h"


int main()
{

salle *tab ;
int x ;
while (1) {
  if(x!=2 && x!=3){
    printf("\n------------------------------ MENU :--------------------------------------------------------\n");
    printf("\n \t 1. Initialisation des salles  .\n");
    printf("\n \t 2. Reservation de sieges .\n");
    printf("\n \t 3. Annulation de reservation .\n");
    printf("\n \t 4. Affichage des salles dont le cinema possede.\n");
    printf("\n \t 5. Affichage de reservations des utilisateurs .\n");
    printf("\n \t 6. Quitter .\n \n -----------------------------------------------------------------------------------------\n\n");
  }

    printf("\n (^_^) --->Entrez votre choix a partir de menu  : ");
        scanf("%d", &x);

        switch (x) {
            case 1:

              tab = initialise_salle();
              printf("\n\n (^_^)-->Initialisation avec success . \n\n");
                break;

            case 2:

              tab=reservation_seige(tab) ;

                break;
            case 3 :
                tab=annulation_reservation(tab);
                break;
            case 4 :
                Affichage_salles(tab);
                break ;
            case 5 :
                Affichage_reservateur();
                break ;
            case 6:
                 printf("\n\n--------------------------<...AU REVOIR (^_^)...>------------------------------\n");
                return 0;
            default:
                printf("\n\n(-_-)-->!! Choix invalide. Ce numero n'existe pas dns le menu,Veuillez reessayer .\n");
                break;
        }
    }

    return 0;
}
