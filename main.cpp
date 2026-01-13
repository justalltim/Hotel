#include <iostream>
#include <vector>
#include "Date.h"
#include "Client.h"
#include "Chambre.h"
#include "Hotel.h"
#include "Reservation.h"

int main() {
    Hotel hotel1("Hotel", "Dijon", 1001);
    std::vector<Chambre> chambres;
    chambres.push_back(Chambre(101, "Single", 100.0, "Hotel"));
    chambres.push_back(Chambre(102, "Single", 100.0, "Hotel"));
    chambres.push_back(Chambre(103, "Single", 100.0, "Hotel"));

    chambres.push_back(Chambre(201, "Double", 125.0, "Hotel"));
    chambres.push_back(Chambre(202, "Double", 125.0, "Hotel"));
    chambres.push_back(Chambre(203, "Double", 125.0, "Hotel"));
    chambres.push_back(Chambre(204, "Double", 125.0, "Hotel"));
    chambres.push_back(Chambre(205, "Double", 125.0, "Hotel"));

    chambres.push_back(Chambre(301, "Suite", 210.0, "Hotel"));
    chambres.push_back(Chambre(302, "Suite", 210.0, "Hotel"));
