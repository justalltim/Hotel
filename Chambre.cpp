#include "Chambre.h"
void Chambre::ModifierPrix(float nouveauPrix) {
    prix = nouveauPrix;
    std::cout << "Nouveau prix de la chambre : " << prix << std::endl;
