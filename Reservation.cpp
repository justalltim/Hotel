#include "Reservation.h"
void Reservation::ModifierSejour(int nbreNuits) {
    int choix;
    std::cout << "Entrez 1 pour modifier le nombre de nuits ou 2 pour la date de sejour: " << std::endl;
    std::cin >> choix;
    if (choix == 1) {
        std::cout << "Nouveau nombre de nuits: " << std::endl;
        std::cin >> nbreNuits;
        NbreNuits = nbreNuits;
    } else if (choix == 2) {
        dateDebut.validerDate(dateDebut.Jour, dateDebut.Mois, dateDebut.Annee);
    }
}
void Reservation::PrixSejour(float prixNuit) {
    MontantTotal = prixNuit * NbreNuits;
    std::cout << "Montant total du sejour: " << MontantTotal << "€" << std::endl;
}
