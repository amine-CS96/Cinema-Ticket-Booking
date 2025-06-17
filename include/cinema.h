#ifndef CINEMA_H_INCLUDED
#define CINEMA_H_INCLUDED

typedef struct salle{
int numero ;
int nbr_reservSeige ;
int nbr_dispSeige ;
}salle ;
typedef struct admin{
char nom[77] ;
char id[50];
int numero_salle ;
int siege_reserv ;
}admin ;
extern admin * tb ;
extern int nb ;
extern int k ;
extern int c ;
extern salle * initialise_salle () ;
extern salle * reservation_seige (salle * tab) ;
extern salle * annulation_reservation (salle* tab) ;
extern void  Affichage_salles(salle* tab) ;
extern void Affichage_reservateur();
#endif // EX_H_1_H_INCLUDED
