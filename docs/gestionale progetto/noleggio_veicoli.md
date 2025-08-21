# Noleggio Veicoli — Specifica (da PDF)

## Attori
- Cliente, Addetto, Responsabile flotte

## Casi d'uso principali
- Gestione veicoli, gestione clienti
- Preventivo e prenotazione con verifica disponibilità
- Check-out (ritiro) e Check-in (riconsegna)
- Manutenzioni, report flotta

## Entità (bozza)
- Veicolo(id, targa, marca, modello, classe, km, stato)
- Cliente(id, nome, patente, scadenza, note)
- Prenotazione(id, veicoloId, clienteId, inizio, fine, stato, caparra)
- Contratto(id, prenotazioneId, kmOut, kmIn, tariffa, cauzione, stato)
- Danno(id, contrattoId, descrizione, costo), Manutenzione(id, veicoloId, tipo, data, note)

## Stati
- Veicolo: Disponibile, Opzionato, Prenotato, Noleggiato, InManutenzione, Sospeso
- Prenotazione: Bozza, Confermata, Cancellata, NoShow, ConvertitaInContratto
- Contratto: Aperto, Chiuso, InContestazione

## Regole (estrarre e dettagliare dai PDF)
- Conflict checking su periodo; cauzione obbligatoria; penali ritardo e franchigia
- Vincoli patente/età; manutenzione blocca noleggio

## Diagrammi (da completare)
- Use case: principali attori e flussi
- Classi: entità e servizi
- Sequenza: prenotazione → check-out → check-in
- Stati: veicolo, prenotazione, contratto