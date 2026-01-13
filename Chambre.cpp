<<<<<<< HEAD
#include "Chambre.h"
void Chambre::ModifierPrix(float nouveauPrix) {
    prix = nouveauPrix;
    std::cout << "Nouveau prix de la chambre : " << prix << std::endl;
=======
#include "Chambre.h"
void Chambre::ModifierPrix() {
    std::cout << "Nouveau prix: " << std::endl;
    std::cin >> nouveauPrix;
    prix = nouveauPrix;
}
int main() {
    Chambre chambre1(101, "Single", 75);
    chambre1.ModifierPrix();
>>>>>>> ccbb46c0f5e0f43fb3979032a848e07793dfbc9c
}