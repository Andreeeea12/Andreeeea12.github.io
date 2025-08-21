#include <iostream>
#include <string>

static void print_menu() {
    std::cout << "\n=== Hotel / B&B ===\n"
              << "1) Ricerca disponibilita'\n"
              << "2) Nuova prenotazione\n"
              << "3) Check-in\n"
              << "4) Check-out\n"
              << "5) Gestione tariffe/stagioni\n"
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
            std::cout << "[TODO] Ricerca disponibilita'\n";
        } else if (choice == "2") {
            std::cout << "[TODO] Nuova prenotazione\n";
        } else if (choice == "3") {
            std::cout << "[TODO] Check-in\n";
        } else if (choice == "4") {
            std::cout << "[TODO] Check-out\n";
        } else if (choice == "5") {
            std::cout << "[TODO] Gestione tariffe/stagioni\n";
        } else if (choice == "0") {
            break;
        } else {
            std::cout << "Scelta non valida.\n";
        }
    }
    return 0;
}