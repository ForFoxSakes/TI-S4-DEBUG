## Product Owner Interview

*Het doel van dit interview is om informatie te verzamelen voor het vaststellen van de requirements voor het Submarine Project.*

Voor het definiëren van de requirements zijn er een aantal vragen opgesteld. Deze requirements zijn onderverdeeld in **functionele** en **niet-functionele requirements**. **Functionele requirements** beschrijven wat het systeem moet doen, terwijl **niet-functionele requirements** beperkingen opleggen aan hoe het systeem functioneert.

### 1. Introductie

#### 1.1 Kunt u het doel van het onderzeeër-simulatieproject voor de brandweer beschrijven?
Het doel van het onderzeeër-simulatieproject voor de brandweer is om een nauwkeurige simulatieomgeving te creëren. Hierin kunnen nieuwe toevoegingen of patches voor de onderzeeër eerst getest worden voordat ze op het fysieke apparaat worden toegepast. De fysieke onderzeeër is een **Chasing M2 ROV**.

#### 1.2 Wie zijn de belangrijkste stakeholders van dit project?
- De brandweer
- De ontwikkelaars van de onderzeeër

#### 1.3 Welke specifieke problemen moet deze simulatie oplossen?
- Het testen van firmware-updates zonder de fysieke onderzeeër te gebruiken
- Het creëren van een trainingsomgeving voor brandweerpersoneel

#### 1.4 Heeft u al een visie of concept voor hoe deze onderzeeër-simulatie eruit zou moeten zien?
- De simulatie moet een realistische weergave bieden van de **Chasing M2**
- Wateromstandigheden en basisomgevingen moeten correct worden gesimuleerd

### 2. Functionele Requirements

#### 2.1 Gebruikers en scenario’s

##### 2.1.1 Welke verschillende typen gebruikers zullen met de simulatie werken?
- Brandweerlieden
- Ontwikkelaars

##### 2.1.2 Welke specifieke reddingsscenario’s in water moet de simulatie kunnen nabootsen?
- Te bepalen (bijv. onderwaterreddingen, inspecties, zoekacties)

#### 2.2 Besturing en navigatie

##### 2.2.1 Hoe wordt de huidige onderzeeër bestuurd? Moet de simulatie dit ook nabootsen?
- De onderzeeër wordt bestuurd via fysieke controllers en mogelijk touchscreen/VR (nog te onderzoeken voor de **Chasing M2**)
- De simulatie moet dezelfde besturingsmethoden ondersteunen

##### 2.2.2 Welke bewegingen moet de onderzeeër kunnen maken?
- Duiken, stijgen, draaien, achteruitvaren, etc. (te baseren op de specificaties van de **Chasing M2**)

##### 2.2.3 Moet de simulator realistische waterweerstand en stroming simuleren?
- Een algemene watersimulatie is vereist
- Geen volledige stromingsmodellen, maar beweging in stil water moet realistisch zijn

#### 2.3 Omgeving en visualisatie

##### 2.3.1 Welke typen wateromgevingen moeten gesimuleerd worden?
- Meren
- Rivieren
- Overstroomde gebieden

##### 2.3.2 Moeten er obstakels of gevaren in de simulatie aanwezig zijn?
- Een minimaal aantal obstakels die relevant zijn voor het testen van de functionaliteiten

#### 2.4 Interactie en reddingsoperaties

##### 2.4.1 Welke reddingsacties moet de onderzeeër kunnen uitvoeren?
- Nog nader te bepalen

##### 2.4.2 Welke apparatuur of tools moet de onderzeeër in de simulatie hebben?
- Dezelfde als de **Chasing M2**

##### 2.4.3 Moet er interactie mogelijk zijn met andere hulpdiensten?
- Niet direct noodzakelijk

#### 2.5 Feedback en rapportage

##### 2.5.1 Welke prestatie-indicatoren moeten gemeten en gerapporteerd worden?
- Alle actuatoren en sensoren van de onderzeeër
- Elk object moet los gelogd kunnen worden

##### 2.5.2 Moet de simulator feedback geven tijdens of na de simulatie?
- Ja, er moet een volledig simulatierapport geproduceerd worden na afloop

### 3. Niet-Functionele Requirements

#### 3.1 Prestatie en schaalbaarheid

##### 3.1.1 Moeten gebruikers gelijktijdig met de simulator kunnen werken?
- Ja, maar niet op dezelfde simulator. Meerdere instanties moeten geopend kunnen worden

#### 3.2 Gebruiksvriendelijkheid

##### 3.2.1 Wat is het technische niveau van de eindgebruikers?
- Ontwikkelaars: ervaren
- Brandweerlieden: beperkt, getrainde gebruikers

#### 3.3 Betrouwbaarheid en veiligheid

##### 3.3.1 Hoe belangrijk is het dat de simulatie waarheidsgetrouw is?
- De onderzeeër zelf moet volledig realistisch zijn
- De omgeving hoeft minder realistisch te zijn, maar stil water moet correct gesimuleerd worden

#### 3.4 Onderhoudbaarheid

##### 3.4.1 Moet het systeem modulair zijn?
- Ja, dit is een hoofddoel van de simulatie

#### 3.5 Integratie

##### 3.5.1 Moet de simulator integreren met bestaande systemen van de brandweer?
- Momenteel niet, maar de simulator moet modulair genoeg zijn om dit in de toekomst mogelijk te maken

##### 3.5.2 Is er behoefte aan een API voor externe toepassingen?
- Ja

##### 3.5.3 Zijn er specifieke data-export of importvereisten?
- Volledige logs van elke actuator en sensor moeten beschikbaar zijn voor firmwaretests

#### 3.6 Compliance en standaarden

##### 3.6.1 Aan welke specifieke veiligheidsstandaarden of regelgeving moet de simulator voldoen?
- Niet van toepassing

##### 3.6.2 Zijn er trainingsprotocollen van de brandweer die geïntegreerd moeten worden?
- Nee

##### 3.6.3 Zijn er privacy-overwegingen voor het opslaan van trainingsgegevens?
- Nee

