#include "Hotel.h"
#include "Chambre.h"

void AjouterChambre() {
    std::cout << "Ajouter une chambre a l'hotel " << std::endl;
    std::cout << "Numero de Chambre " << std::endl;
    std::cin >> NumChambre;
    std::cout << "Type de Chambre "  << std::endl;
    std::cin >> TypeChambre;
    std::cout << "Prix par nuit " << std::endl;
    std::cin >> Prix;
    Chambre chambre(NumChambre,TypeChambre,Prix);
    
}
void SupprimerChambre() {
    std::cout << "Supprimer une chambre de l'hotel " << std::endl;
    std::cout << "Numero de Chambre a supprimer " << std::endl;
    std::cin >> NumChambre;
}
int main() {
    Hotel hotel1("Hotel", "Dijon", 1001);
    hotel1.AjouterChambre();
    hotel1.SupprimerChambre();
}
<<<<<<< HEAD
=======

>>>>>>> f82fe2e8d4910e47cd5cd7cde90db7868457ce7d
