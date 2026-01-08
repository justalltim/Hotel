#include <stdbool.h>
#include <iostream> 
class Chambre 
{
private:
    int numero;
    std::string type;
    float prix;
    std::string hotel;
public:
    Chambre( int numero, std::string type, float prix, std::string hotel) {
        this->numero = numero;
        this->type = type;
        this->prix = prix;
        this->hotel = hotel;
    }

};