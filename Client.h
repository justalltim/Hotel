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