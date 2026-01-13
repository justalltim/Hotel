<<<<<<< HEAD
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
=======
#include <iostream>

Class Hotel {
private:   
    std::string nom;
    std::string ville;
    int Identifiant;
    ensembleChambres;
public:
    Hotel( std::string nom, std::string ville, int Identifiant) {
        this->nom = nom;
        this->ville = ville;
        this->Identifiant = Identifiant;
        this->ensembleChambres = ensembleChambres;
    }  
             
};
>>>>>>> ccbb46c0f5e0f43fb3979032a848e07793dfbc9c
