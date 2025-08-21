#include <iostream>
#include <string>

static void print_menu() {
    std::cout << "\n=== Noleggio Veicoli ===\n"
              << "1) Inserisci veicolo\n"
              << "2) Lista veicoli\n"
              << "3) Nuova prenotazione\n"
              << "4) Check-out (apri contratto)\n"
              << "5) Check-in (chiudi contratto)\n"
              << "6) Manutenzione veicolo\n"
              << "0) Esci\n> ";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    bool running = true;
    while (running) {
        print_menu();
        std::string choice;
        if (!std::getline(std::cin, choice)) break;

        if (choice == "1") {
            std::cout << "[TODO] Inserisci veicolo\n";
        } else if (choice == "2") {
            std::cout << "[TODO] Lista veicoli\n";
        } else if (choice == "3") {
            std::cout << "[TODO] Nuova prenotazione\n";
        } else if (choice == "4") {
            std::cout << "[TODO] Check-out\n";
        } else if (choice == "5") {
            std::cout << "[TODO] Check-in\n";
        } else if (choice == "6") {
            std::cout << "[TODO] Manutenzione\n";
        } else if (choice == "0") {
            running = false;
        } else {
            std::cout << "Scelta non valida.\n";
        }
    }
    return 0;
}