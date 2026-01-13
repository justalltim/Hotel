<<<<<<< HEAD
#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
class Client {
private:
    std::string nom;
    std::string prenom;
    int Identifiant;
public:
    Client(std::string nom, std::string prenom, int Identifiant) {
        this->nom = nom;
        this->prenom = prenom;
        this->Identifiant = Identifiant;
    }
    void afficherClient();
    std::string getNom() const { return nom; }
    std::string getPrenom() const { return prenom; }
    int getIdentifiant() const { return Identifiant; }
};
#endif
=======
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
class Client
{
private: 
    std::string nom;
    std::string prenom;
    int Identifiant;
public:
    Client( std::string nom, std::string prenom, int Identifiant) {
        this->nom = nom;
        this->prenom = prenom;
        this->Identifiant = Identifiant;
    }  
             
};
>>>>>>> ccbb46c0f5e0f43fb3979032a848e07793dfbc9c
