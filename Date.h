#ifndef DATE_H
#define DATE_H
#include <iostream>
class Date {
public:
    int Jour, Mois, Annee;

    Date(int jour = 1, int mois = 1, int annee = 2024) {
        Jour = jour;
        Mois = mois;
        Annee = annee;
    }

    bool isBissextile(int annee) {
        if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
            return true;
        } else {
            return false;
        }
    }

    bool JourValide(int jour, int mois, int annee) {
        if ((jour < 1 || jour > 31)) {
            return false;
        }
        if (mois < 1 || mois > 12) {
            return false;
        }
        if (!isBissextile(annee)) {
            if (mois == 2 && jour > 28) {
                return false;
            }
        } else {
            if (mois == 2 && jour > 29) {
                return false;
            }
        }
        if ((mois == 4 || mois == 6 || mois == 9 || mois == 11) && jour > 30) {
            return false;
        }
        return true;
    }
    void validerDate(int &jour, int &mois, int &annee) {
        std::cout << "saisir le jour: ";
        std::cin >> jour;
        std::cout << "saisir le mois: ";
        std::cin >> mois;
        std::cout << "saisir l'annee: ";
        std::cin >> annee;
        while (!JourValide(jour, mois, annee)) {
            std::cout << "Date invalide\n";
            std::cout << "Resaisir le jour: ";
            std::cin >> jour;
            std::cout << "Resaisir le mois: ";
            std::cin >> mois;
            std::cout << "Resaisir l'annee: ";
            std::cin >> annee;
        }
        std::cout << jour << "/" << mois << "/" << annee << std::endl;
    }
};