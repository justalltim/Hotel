<<<<<<< HEAD
#include "Client.h"
void Client::afficherClient() {
    std::cout << "Nom: " << nom << std::endl;
    std::cout << "Prenom: " << prenom << std::endl;
    std::cout << "Identifiant: " << Identifiant << std::endl;
}
=======
#include "Client.h"

void Client::afficherClient() {
    std::cout << "Nom: " << nom << std::endl;
    std::cout << "Prenom: " << prenom << std::endl;
    std::cout << "Identifiant: " << Identifiant << std::endl;
}
int main() {
    Client client1("Doe", "John", 12345);
    Client client2("Smith", "Jane", 6789);
    std::cout << "Client 1:" << std::endl;
    client1.afficherClient();
    std::cout << "Client 2:" << std::endl;
    client2.afficherClient();
    return 0;
}
>>>>>>> ccbb46c0f5e0f43fb3979032a848e07793dfbc9c
