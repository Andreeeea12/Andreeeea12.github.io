# GestionaleSuite (Console)

Tre applicazioni console C++17:
- vehicle_rental_cli: Noleggio veicoli
- restaurant_pos_cli: Ristorante/POS
- hotel_bnb_cli: Hotel/B&B

## Prerequisiti
- CMake >= 3.16
- Un compilatore C++ con supporto C++17

## Build
```bash
cd gestionale-suite
mkdir build && cd build
cmake ..
cmake --build . --config Release
```

## Esecuzione
```bash
./vehicle_rental_cli
./restaurant_pos_cli
./hotel_bnb_cli
```

## Struttura (da completare)
- Domain: entità e value object
- Repository: interfacce + implementazioni file/CSV
- Services: regole e orchestrazione casi d'uso
- CLI: parsing comandi, validazioni base

## Prossimi passi
- Aggiungere entità e servizi minimi per ciascuna app.
- Integrare persistenza file in `data/` (per dominio, CSV/testo puro).
- Aggiungere test e diagrammi (PlantUML/Mermaid) in docs/.