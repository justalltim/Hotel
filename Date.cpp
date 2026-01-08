#include "Date.h"
int main() {
    Date date1(32, 13, 2021); 
    Date date2(29, 2, 2020); 
    date1.validerDate(date1.Jour, date1.Mois, date1.Annee);
    std::cout << "Date valide: " << date1.Jour << "/" << date1.Mois << "/" << date1.Annee << std::endl;
    date2.validerDate(date2.Jour, date2.Mois, date2.Annee);
    std::cout << "Date valide: " << date2.Jour << "/" << date2.Mois << "/" << date2.Annee << std::endl;
    return 0;
}