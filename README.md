# Workshop 22. Juni 2012

## Inhalt

Im 8. Workshop geht es um:

 - "const correctness"
 - Templates
 - O-Kalkül
 - Die STL-Datenstrukturen `vector` und `list` sowie Iteratoren

### Folien zum Vortrag

Die Vortragsfolien stehen als [PDF](https://github.com/kit-cpp-workshop/kit-cpp-workshop.github.com/raw/downloads/workshops/ss12-08/slides.pdf) zum Download bereit. Außerdem liegt der LaTeX-Quellcode zu den Folien im Ordner `slides`.

### Screencast

Eine Aufzeichnung des Vortrages steht zum [Download](https://drive.google.com/file/d/0B18AwdjM48imSTdXQWxlNTNWamM/edit?usp=sharing) bereit.

 * ab 00:00 const correctness
 * ab 15:38 Templates
 * ab 35:30 O-Kalkül
 * ab 41:02 STL und STL sequence container
 * ab 57:07 Vorstellung der Praxisaufgaben

## Aufgaben

Sendet, nachdem ihr alle Aufgaben abgearbeitet habt, einen Pull-Request an das Workshop-Repository. Stellt sicher, dass ihr vorher alle eure Änderungen in euren Fork übertragen habt. Nennt euren Workshop-Betreuer im Text des Pull-Requests, einer der Betreuer (bevorzugt der genannte) wird dann eure Lösungen durchsehen, kommentieren und nach Abschluss des Reviews den Pull-Request als abgelehnt markieren.

### Aufgabe 1: Ringpuffer (const)

Erweitere deine Ringpuffer-Klasse aus dem 2. Workshop.
Alle Methoden die (aus der Perspektive eines Nutzers einer Instanz der Klasse) die Instanz nicht verändern, sollen `const` sein.
Wenn du dem Nutzer die Möglichkeit einräumst, auf die Daten der zugrundeliegenden Datenstruktur direkt zuzugreifen, soll dies so geschehen, dass diese NICHT `public` ist und NICHT vom Nutzer verändert werden kann.

### Aufgabe 2: Eine generische Look-Up-Table

Implementiere eine Look-Up-Table die beliebige "Dinge" speichern kann und sie dabei einem Schlüsselwert zuordnet. Anhand dieses Schlüsselwertes soll es später möglich sein, die "Dinge" wieder aus der Look-Up-Table zu entfernen.

Im Ordner `ObjLUT` liegt eine (minimale) vorgegebene Schnittstelle, diese soll als Ausgangspunkt für die Implementierung verwendet werden.

### (Bonus-)Aufgabe 3: Schach

Sofern dein Schachprogramm mit GUI noch nicht fertig ist, kannst du daran weiterarbeiten.
