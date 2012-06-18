# Workshop 22. Juni 2012

## Inhalt

Im 8. Workshop geht es um:
 * "const correctness"
 * Templates
 * Algorithmische Komplexitätstheorie
 * Die STL-Datenstrukturen `vector` und `list` sowie Iteratoren

### Folien zum Vortrag

Die Vortragsfolien stehen als [PDF](URL) zum Download bereit. Außerdem liegt der LaTeX-Quellcode zu den Folien im Ordner `slides`.

### Screencast

Ein Screencast des Vortrags wird nach dem Workshop an dieser Stelle verlinkt.

## Aufgaben

Sendet, nachdem ihr alle Aufgaben abgearbeitet habt, einen Pull-Request an das Workshop-Repository. Stellt sicher, dass ihr vorher alle eure Änderungen in euren Fork übertragen habt. Nennt euren Workshop-Betreuer im Text des Pull-Requests, einer der Betreuer (bevorzugt der genannte) wird dann eure Lösungen durchsehen, kommentieren und nach Abschluss des Reviews den Pull-Request als abgelehnt markieren.

### Aufgabe 1: Fibonacci-LUT

Erweitere deine Fibonacci-LUT Klasse aus dem 2. Workshop.
Alle Methoden die (aus der Perspektive eines Nutzers einer Instanz der Klasse) die Instanz nicht verändern, sollen const sein.
Ausserdem soll es dem Nutzer ermöglicht werden, direkt auf die LUT zuzugreifen, OHNE dass die Tabelle im public: bereich ist, oder der Nutzer die Tabelle verändern kann.

### Aufgabe 2: Eine generische Look-Up-Table

Implementiere eine Look-Up-Table die beliebige "Dinge" speichern kann und sie dabei einem Schlüsselwert zuordnet. Anhand dieses Schlüsselwertes soll es später möglich sein, die "Dinge" wieder aus der Look-Up-Table zu entfernen.

Im Ordner `ObjLUT` liegt eine (minimale) vorgegebene Schnittstelle, diese soll als Ausgangspunkt für die Implementierung verwendet werden.

### (Bonus-)Aufgabe 3: Schach

Sofern dein Schachprogramm mit GUI noch nicht fertig ist, kannst du daran weiterarbeiten.
