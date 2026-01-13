#ifndef HOTEL_H
#define HOTEL_H
#include <iostream>
#include <vector>
#include <string>
#include "Chambre.h"
class Hotel {
private:
    std::string nom;
    std::string ville;
    int Identifiant;
std::vector<Chambre> ensembleChambres;
public:
    friend operator << ()
    Hotel(std::string nom, std::string ville, int Identifiant) {
        this->nom = nom;
        this->ville = ville;
        this->Identifiant = Identifiant;
    }
    void ajouterChambre(const Chambre& chambre) {
        ensembleChambres.push_back(chambre);
    }
};
#endif