#include "Reservation.h"

void ModifierSejour(int nbreNuits) {
    std::cout << "Entrez 1 pour modifier le nombre de nuits de la reservation ou la  2 pourdate de sejour " << std::endl;
    std::cin >> choix;
    if (choix == 1) {
    std::cout << "Nouveau nombre de nuits: " << std::endl;
    std::cin >> nbreNuits;
    NbreNuits = nbreNuits;
    } else if (choix == 2) {
        dateDebut.validerDate(dateDebut.Jour, dateDebut.Mois, dateDebut.Annee);
    }
}
void PrixSejour () {
    MontantTotal = Prix * NbreNuits;
    std::cout << "Montant total du sejour: " << MontantTotal << std::endl;
}
int main() {
    Reservation reservation1(12345, 1001, 101, Date(15, 7, 2023), 300, 4);
    reservation1.ModifierSejour(5);
    reservation1.PrixSejour();
}