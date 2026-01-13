<<<<<<< HEAD
#ifndef RESERVATION_H
#define RESERVATION_H
#include <iostream>
#include "Date.h"
class Reservation {
private:
    int idClient;
    int idHotel;
    int idChambre;
    Date dateDebut;
    float MontantTotal;
    int NbreNuits;
public:
    Reservation(int idClient, int idHotel, int idChambre, Date dateDebut, float MontantTotal, int NbreNuits) {
        this->idClient = idClient;
        this->idHotel = idHotel;
        this->idChambre = idChambre;
        this->dateDebut = dateDebut;
        this->MontantTotal = MontantTotal;
        this->NbreNuits = NbreNuits;
    }
    void ModifierSejour(int nbreNuits);
    void PrixSejour(float prixNuit);
    int getIdClient() const { return idClient; }
    int getIdHotel() const { return idHotel; }
    int getIdChambre() const { return idChambre; }
    Date getDateDebut() const { return dateDebut; }
    float getMontantTotal() const { return MontantTotal; }
    int getNbreNuits() const { return NbreNuits; }
};
#endif
=======
#include <iostream>

class Reservation {
private:
    int idClient;
    int idHotel;
    int idChambre;
    Date dateDebut;
    int MontantTotal;
    int NbreNuits;
public:
    Reservation(int idClient, int idHotel, int idChambre, Date dateDebut        , int MontantTotal, int NbreNuits) {
        this->idClient = idClient;
        this->idHotel = idHotel;
        this->idChambre = idChambre;
        this->dateDebut = dateDebut;
        this->MontantTotal = MontantTotal;
        this->NbreNuits = NbreNuits;
    }      

};
>>>>>>> ccbb46c0f5e0f43fb3979032a848e07793dfbc9c
