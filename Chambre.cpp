#include "Chambre.h"
void Chambre::ModifierPrix() {
    std::cout << "Nouveau prix: " << std::endl;
    std::cin >> nouveauPrix;
    prix = nouveauPrix;
}
int main() {
    Chambre chambre1(101, "Single", 75);
    chambre1.ModifierPrix();
}