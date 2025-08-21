# Ristorante/POS — Specifica (da PDF)

## Attori
- Cameriere, Cucina, Cassiere

## Casi d'uso principali
- Gestione tavoli, gestione menu
- Ordini al tavolo e comande in cucina
- Stato portate e chiusura conto (split pagamento)

## Entità (bozza)
- Tavolo(id, posti, stato)
- VoceMenu(id, nome, categoria, prezzo)
- Ordine(id, tavoloId, righe[], stato, note)
- RigaOrdine(id, voceMenuId, qty, stato)
- Comanda(id, ordineId, righe[], stato)
- Conto(id, ordineId, totale, sconti)
- Pagamento(id, contoId, metodo, importo)

## Stati
- Tavolo: Libero, Occupato, InPagamento
- Ordine: Aperto, Inviato, Parziale, Servito, Chiuso
- Comanda: InCoda, InPreparazione, Pronta, Consegnata

## Regole (estrarre e dettagliare dai PDF)
- Corsi (antipasto/primo/...) e tempi
- Annullamento righe con motivazione
- Split conto per coperto/portate

## Diagrammi (da completare)
- Use case, Classi, Sequenza (ordine → comanda → servizio), Stati (ordine/comanda/tavolo)