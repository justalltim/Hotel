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