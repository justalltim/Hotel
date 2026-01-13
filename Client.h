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
<<<<<<< HEAD
=======

>>>>>>> f82fe2e8d4910e47cd5cd7cde90db7868457ce7d
