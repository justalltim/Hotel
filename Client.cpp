#include "Client.h"
<<<<<<< HEAD

=======
>>>>>>> f82fe2e8d4910e47cd5cd7cde90db7868457ce7d
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
<<<<<<< HEAD
=======

>>>>>>> f82fe2e8d4910e47cd5cd7cde90db7868457ce7d
