#include <iostream>
#include <string>

static void print_menu() {
    std::cout << "\n=== Ristorante / POS ===\n"
              << "1) Apri tavolo\n"
              << "2) Aggiungi portata\n"
              << "3) Invia comanda in cucina\n"
              << "4) Stato portate\n"
              << "5) Chiudi conto / Pagamento\n"
              << "0) Esci\n> ";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    while (true) {
        print_menu();
        std::string choice;
        if (!std::getline(std::cin, choice)) break;

        if (choice == "1") {
            std::cout << "[TODO] Apri tavolo\n";
        } else if (choice == "2") {
            std::cout << "[TODO] Aggiungi portata\n";
        } else if (choice == "3") {
            std::cout << "[TODO] Invia comanda\n";
        } else if (choice == "4") {
            std::cout << "[TODO] Stato portate\n";
        } else if (choice == "5") {
            std::cout << "[TODO] Chiudi conto\n";
        } else if (choice == "0") {
            break;
        } else {
            std::cout << "Scelta non valida.\n";
        }
    }
    return 0;
}