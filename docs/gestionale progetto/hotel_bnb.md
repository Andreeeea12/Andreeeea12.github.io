# Hotel/B&B — Specifica (da PDF)

## Attori
- Cliente, Receptionist

## Casi d'uso principali
- Ricerca disponibilità, prenotazione, caparra, cancellazione
- Check-in, check-out, addebiti extra, pagamenti
- Gestione camere, tariffe e stagionalità

## Entità (bozza)
- Camera(id, tipo, capacità, stato)
- Prenotazione(id, clienteId, cameraId|tipo, checkIn, checkOut, stato, caparra)
- Cliente(id, anagrafica, contatti)
- Tariffa(id, tipoCamera, stagione, prezzo)
- Stagione(id, dataInizio, dataFine, coefficiente)
- Pagamento(id, prenotazioneId, metodo, importo)

## Stati
- Camera: Libera, Opzionata, Occupata, Pulizia, Manutenzione
- Prenotazione: Opzione, Confermata, CheckIn, CheckOut, Cancellata, NoShow

## Regole (estrarre e dettagliare dai PDF)
- Overbooking opzionale; cancellazione per finestra; soggiorno minimo; caparra

## Diagrammi (da completare)
- Use case, Classi, Sequenza (prenotazione → soggiorno → check-out), Stati (camera/prenotazione)