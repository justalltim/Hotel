#include "Reservation.h"
<<<<<<< HEAD

void ModifierSejour(int nbreNuits) {
    std::cout << "Entrez 1 pour modifier le nombre de nuits de la reservation ou la  2 pourdate de sejour " << std::endl;
    std::cin >> choix;
    if (choix == 1) {
    std::cout << "Nouveau nombre de nuits: " << std::endl;
    std::cin >> nbreNuits;
    NbreNuits = nbreNuits;
=======
void Reservation::ModifierSejour(int nbreNuits) {
    int choix;
    std::cout << "Entrez 1 pour modifier le nombre de nuits ou 2 pour la date de sejour: " << std::endl;
    std::cin >> choix;
    if (choix == 1) {
        std::cout << "Nouveau nombre de nuits: " << std::endl;
        std::cin >> nbreNuits;
        NbreNuits = nbreNuits;
>>>>>>> f82fe2e8d4910e47cd5cd7cde90db7868457ce7d
    } else if (choix == 2) {
        dateDebut.validerDate(dateDebut.Jour, dateDebut.Mois, dateDebut.Annee);
    }
}
<<<<<<< HEAD
void PrixSejour () {
    MontantTotal = Prix * NbreNuits;
    std::cout << "Montant total du sejour: " << MontantTotal << std::endl;
=======
void Reservation::PrixSejour(float prixNuit) {
    MontantTotal = prixNuit * NbreNuits;
    std::cout << "Montant total du sejour: " << MontantTotal << "€" << std::endl;
>>>>>>> f82fe2e8d4910e47cd5cd7cde90db7868457ce7d
}
int main() {
    Reservation reservation1(12345, 1001, 101, Date(15, 7, 2023), 300, 4);
    reservation1.ModifierSejour(5);
    reservation1.PrixSejour();
}
<<<<<<< HEAD
=======

>>>>>>> f82fe2e8d4910e47cd5cd7cde90db7868457ce7d
