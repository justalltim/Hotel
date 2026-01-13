#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <iostream>
#include <string>
class Chambre {
private:
    int numero;
    std::string type;
    float prix;
    std::string hotel;
public:
    Chambre(int numero, std::string type, float prix, std::string hotel) {
        this->numero = numero;
        this->type = type;
        this->prix = prix;
        this->hotel = hotel;
    }
    void ModifierPrix(float nouveauPrix);
    int getNumero() const { return numero; }
    std::string getType() const { return type; }
    float getPrix() const { return prix; }
    std::string getHotel() const { return hotel; }
};
#endif
