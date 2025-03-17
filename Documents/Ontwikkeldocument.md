# Ontwikkeldocument Submarine Simulator

## Inhoudsopgave
> *Later pas toevoegen*
## 1. Inleiding 
> *Beschrijf kort de context van het project, de aanleiding en het doel.*
Voor de Submarine die de Brandweer gebruikt voor noodsituaties in watergebedien in en om Nederland moet een simulatie ontwikkeld worden. Deze simulatie zal als hulpmiddel bieden voor de brandweerlieden die de Submarine moeten gebruiken en ontwikkelaars die de submarine uit willen breiden.

## 2. Projectomschrijving
### Doel van het project
**Doel van het onderzeeër-simulatieproject**  
Het doel van het onderzeeër-simulatieproject voor de brandweer is om een nauwkeurige simulatieomgeving te creëren. Hierin kunnen nieuwe toevoegingen of patches voor de onderzeeër eerst getest worden voordat ze op het fysieke apparaat worden toegepast. De fysieke onderzeeër is een **Chasing M2 ROV**. 

**Specifieke problemen die de simulatie oplost**  
- Het testen van firmware-updates zonder de fysieke onderzeeër te gebruiken  
- Het creëren van een trainingsomgeving voor brandweerpersoneel  
- Vermindering van onderhoudskosten en risico’s bij fysieke tests

## 3. Stakeholderanalyse
> *Identificeer de belangrijkste stakeholders, hun belangen en invloed op het project.*


### **Inleiding**  
Bij de ontwikkeling van de simulatie voor de onderzeedrone van de brandweer is het belangrijk om inzicht te krijgen in de betrokken stakeholders en hun impact op het project. Omdat de communicatie met stakeholders via de Product Owner verloopt, richt deze analyse zich op het identificeren van stakeholders, hun invloed en hun belangen. Dit helpt de Product Owner om effectief te communiceren en prioriteiten te stellen. Daarnaast wordt deze analyse gebruikt om de **vereisten (requirements) voor de simulatie** vast te stellen op basis van de behoeften van de stakeholders. De analyse is gebaseerd op Mendelow’s Power-Interest Matrix [(Oxford College of Marketing, 2018)](https://blog.oxfordcollegeofmarketing.com/2018/04/23/what-is-mendelows-matrix-and-how-is-it-useful/).  

---

### **Power-Interest Matrix**  

| **Stakeholder** | **Invloed (Power)** | **Belang (Interest)** | **Vereisten (Requirements)** |
|---------------|----------------|----------------|----------------------|
| **Brandweer (eindgebruikers & trainers)** | Hoog | Hoog | Realistische simulatie, gebruiksvriendelijke interface, trainingsscenario’s |
| **Ontwikkelaars (Firmware & Simulatie)** | Hoog | Hoog | Simulatie moet firmware correct kunnen nabootsen, logging en debugging tools |
| **Projectleiding / management** | Hoog | Laag | Voortgangsrapportage, binnen budget en planning blijven |
| **IT-afdeling (beheer infrastructuur)** | Middel | Laag | Compatibiliteit met bestaande IT-infrastructuur, beveiliging |
| **Hardwareleverancier van de onderzeedrone** | Middel | Hoog | Nauwkeurige weergave van hardwaregedrag in simulatie |
| **Simulatorgebruikers buiten de brandweer (bijv. politie, kustwacht)** | Laag | Hoog | Mogelijkheid tot uitbreidingen voor andere diensten |
| **Externe toezichthouders / regelgevende instanties** | Hoog | Laag | Voldoen aan regelgeving en veiligheidsnormen |

---

### **Aanbevolen Strategie voor de Product Owner**  
1. **Hoge invloed & hoge interesse (Brandweer, Ontwikkelaars)**  
   - Regelmatige afstemming en feedbackmomenten.  
   - Prioriteit geven aan hun eisen en verwachtingen.  
   
2. **Hoge invloed & lage interesse (Projectleiding, Regelgevers)**  
   - Periodieke updates zonder te veel details.  
   - Betrekken bij besluitvorming op hoofdlijnen.  
   
3. **Lage invloed & hoge interesse (Simulatorgebruikers buiten de brandweer)**  
   - Op de hoogte houden via nieuwsbrieven of presentaties.  
   - Feedback verzamelen voor toekomstige verbeteringen.  
   
4. **Lage invloed & lage interesse (IT-afdeling)**  
   - Alleen informeren wanneer er relevante technische veranderingen zijn.  

### Software Requirements Specifications


### 4. Functionele Requirements

#### 4.1 Gebruikers en scenario’s

**4.1.1 Typen gebruikers**  
- Brandweerlieden  
- Ontwikkelaars  
- IT-ondersteuning

**4.1.2 Specifieke reddingsscenario’s**  
- Te bepalen (bijv. onderwaterreddingen, inspecties, zoekacties)  
- Use Case Diagrammen worden opgesteld om de gebruikersinteracties te verduidelijken

#### 3.2 Besturing en navigatie

**4.2.1 Huidige besturing en nabootsing in simulatie**  
- De onderzeeër wordt bestuurd via fysieke controllers en mogelijk touchscreen/VR (nog te onderzoeken voor de **Chasing M2**)  
- De simulatie moet dezelfde besturingsmethoden ondersteunen  
- Vereisten worden vastgelegd in SysML-blokken voor de verschillende besturingsinterfaces

**4.2.2 Bewegingsmogelijkheden**  
- Duiken, stijgen, draaien, achteruitvaren, etc. (te baseren op de specificaties van de **Chasing M2**)  
- Traceerbaarheidstabellen tonen de relatie tussen bewegingen en actuatoren

**4.2.3 Simulatie van waterweerstand en stroming**  
- Een algemene watersimulatie is vereist  
- Geen volledige stromingsmodellen, maar beweging in stil water moet realistisch zijn  
- Traceerbaarheidstabellen koppelen watersimulaties aan besturingsacties

**4.2.4 Realistische fysieke proporties van de onderzeeër**  
- De simulator moet de exacte afmetingen en massa-eigenschappen van de **Chasing M2 ROV** respecteren, zodat de besturing en dynamiek correct worden weergegeven.

#### 3.3 Omgeving en visualisatie

**4.3.1 Wateromgevingen**  
- Meren  
- Rivieren  
- Overstroomde gebieden  
- Visuele componenten worden vastgelegd in SysML-modellen

**4.3.2 Obstakels en gevaren**  
- Een minimaal aantal obstakels die relevant zijn voor het testen van de functionaliteiten  
- Testcases worden opgesteld voor het valideren van omgevingsinteracties

#### 3.4 Interactie en reddingsoperaties

**4.4.1 Reddingsacties**  
- Nog nader te bepalen  
- Scenario's worden beschreven in User Stories


## 5. Requirements
## Requirements Modellering
Voor het definiëren van de requirements zijn er een aantal vragen opgesteld. Deze requirements zijn onderverdeeld in **functionele** en **niet-functionele requirements**. **Functionele requirements** beschrijven wat het systeem moet doen, terwijl **niet-functionele requirements** beperkingen opleggen aan hoe het systeem functioneert.

Om een gestructureerde en efficiënte modellering van de requirements te waarborgen, wordt gebruikgemaakt van moderne requirementsmodelleringstechnieken, zoals **Use Case Diagrammen**, **SysML-blokken**, **User Stories**, en **traceerbaarheidstabellen**.

**Visie op de simulatie**  
- De simulatie moet een realistische weergave bieden van de **Chasing M2**  
- Wateromstandigheden en basisomgevingen moeten correct worden gesimuleerd  
- Het systeem moet uitbreidbaar zijn met toekomstige functies of hardware

---

### 4.1 Functionele Requirements

#### 4.1.1 Gebruikers en scenario’s

**Typen gebruikers**  
- Brandweerlieden  
- Ontwikkelaars  
- IT-ondersteuning

**Specifieke reddingsscenario’s**  
- Te bepalen (bijv. onderwaterreddingen, inspecties, zoekacties)  
- Use Case Diagrammen worden opgesteld om de gebruikersinteracties te verduidelijken

#### 4.1.2 Besturing en navigatie

**Huidige besturing en nabootsing in simulatie**  
- De onderzeeër wordt bestuurd via fysieke controllers en mogelijk touchscreen/VR (nog te onderzoeken voor de **Chasing M2**)  
- De simulatie moet dezelfde besturingsmethoden ondersteunen  
- Vereisten worden vastgelegd in SysML-blokken voor de verschillende besturingsinterfaces

**Bewegingsmogelijkheden**  
- Duiken, stijgen, draaien, achteruitvaren, etc. (te baseren op de specificaties van de **Chasing M2**)  
- Traceerbaarheidstabellen tonen de relatie tussen bewegingen en actuatoren

**Simulatie van waterweerstand en stroming**  
- Een algemene watersimulatie is vereist  
- Geen volledige stromingsmodellen, maar beweging in stil water moet realistisch zijn  
- Traceerbaarheidstabellen koppelen watersimulaties aan besturingsacties

#### 4.1.3 Omgeving en visualisatie

**Wateromgevingen**  
- Meren  
- Rivieren  
- Overstroomde gebieden  
- Visuele componenten worden vastgelegd in SysML-modellen

**Obstakels en gevaren**  
- Een minimaal aantal obstakels die relevant zijn voor het testen van de functionaliteiten  
- Testcases worden opgesteld voor het valideren van omgevingsinteracties

#### 4.1.4 Interactie en reddingsoperaties

**Reddingsacties**  
- Nog nader te bepalen  
- Scenario's worden beschreven in User Stories

**Apparatuur en tools**  
- Dezelfde als de **Chasing M2**  
- Opsomming van apparatuur in een traceerbaarheidstabel

**Interactie met andere hulpdiensten**  
- Niet direct noodzakelijk

#### 4.1.5 Feedback en rapportage

**Prestatie-indicatoren**  
- Alle actuatoren en sensoren van de onderzeeër  
- Elk object moet los gelogd kunnen worden  
- Traceerbaarheidstabellen tonen de koppeling tussen sensoren en rapportage

**Feedback tijdens en na de simulatie**  
- Ja, er moet een volledig simulatierapport geproduceerd worden na afloop  
- Rapportagemodules worden gemodelleerd in SysML

---

### 4.2 Niet-Functionele Requirements

#### 4.2.1 Prestatie en schaalbaarheid

**Gelijktijdig gebruik van de simulator**  
- Ja, maar niet op dezelfde simulator. Meerdere instanties moeten geopend kunnen worden  
- Behoefte aan een modulaire architectuur wordt gespecificeerd

#### 4.2.2 Gebruiksvriendelijkheid

**Technisch niveau van eindgebruikers**  
- Ontwikkelaars: ervaren  
- Brandweerlieden: beperkt, getrainde gebruikers  
- UX/UI-vereisten worden uitgewerkt in wireframes

#### 4.2.3 Betrouwbaarheid en veiligheid

**Nauwkeurigheid van de simulatie**  
- De onderzeeër zelf moet volledig realistisch zijn  
- De omgeving hoeft minder realistisch te zijn, maar stil water moet correct gesimuleerd worden  
- Validatiecriteria worden gedefinieerd

#### 4.2.4 Onderhoudbaarheid

**Modulariteit van het systeem**  
- Ja, dit is een hoofddoel van de simulatie  
- Code en functionaliteiten moeten gescheiden zijn per module

#### 4.2.5 Integratie

**Koppeling met bestaande systemen van de brandweer**  
- Momenteel niet, maar de simulator moet modulair genoeg zijn om dit in de toekomst mogelijk te maken

**Behoefte aan een API**  
- Ja  
- API-specificaties worden gemodelleerd met traceerbaarheidstabellen

**Data-export en importvereisten**  
- Volledige logs van elke actuator en sensor moeten beschikbaar zijn voor firmwaretests

#### 4.2.6 Compliance en standaarden

**Veiligheidsstandaarden en regelgeving**  
- Niet van toepassing  
- Mogelijke toekomstige certificeringen worden benoemd

**Integratie van brandweer-trainingsprotocollen**  
- Nee  
- Mogelijkheden worden besproken

**Privacy-overwegingen bij opslag trainingsgegevens**  
- Nee  
- Data governance wordt in de toekomst overwogen

### **Actuatoren (Aanstuurbare componenten)**
Dit zijn de onderdelen van de ROV die actief worden aangestuurd en een directe invloed hebben op de beweging of werking van het systeem.(https://www.chasing.com/en/)

---
### Analyse Onderzeeër
Het doel van deze analyse is om vast te stellen welke onderdelen van de CHASING M2 gesimuleerd moeten worden en aanspreekbaar moeten zijn in de simulatie.  Daarbij zijn deze onder te verdelen in actuatoren (aanstuurbare componenten) en sensoren (Meet- en detectiecomponenten)
```
CHASING M2 ROV
│
├── Actuatoren (Aanstuurbare componenten)
│   ├── Thrusters (8x)
│   ├── LED-lampen (instelbare helderheid)
│   ├── Camera Pan & Tilt (4K, 360° rotatie)
│   ├── Manipulator Arm (optioneel)
│   ├── Lasermodule (optioneel)
│
└── Sensoren (Meet- en detectiecomponenten)
    ├── IMU (Versnelling & rotatie)
    ├── Dieptesensor (Druksensor)
    ├── Temperatuursensor
    ├── Kompas (Magnetometer)
    ├── Gyroscoop (Rotatie & kantelbewegingen)
    ├── Hoeksensor (Tilt)
    ├── Camera (4K, nachtzicht)
    ├── Sonar (optioneel)
```


**Thrusters (Voortstuwing)**

8  thrusters ()\
Besturingsmodi: voor/achter, zijwaarts, op/neer, draaien (yaw, pitch, roll)
Snelheid gecombineerds motoren 1.5 m/s 

**Licht (LED-lampen)**

Instelbare helderheid voor duikverlichting/
Gebruikt voor zichtbaarheid in donkere omgevingen

**Camera Pan & Tilt Mechanisme**

Kantelbare 4K-camera (op/neer bewegen)
Mogelijke 360° rotatie afhankelijk van de ophanging\

**Manipulator Arm (optioneel)**

Accessoire voor grijpen en manipuleren van objecten
Meerdere vrijheidsgraden afhankelijk van het model

**Lasermodule (optioneel)**

Twee parallelle laserlijnen voor afstands- en schaalbepaling

### Sensoren (Meet- en detectiecomponenten)
Deze sensoren zorgen voor feedback en data, essentieel voor navigatie en omgevingsanalyse.

**IMU (Inertial Measurement Unit)**

Meet versnelling, hoekrotaties (yaw, pitch, roll)\
Essentieel voor stabilisatie en positionering

**Dieptesensor (Druksensor)**

Meet de huidige diepte en waterdruk

**Temperatuursensor**

Meet de temperatuur van het omringende water

**Kompas (Magnetometer)**

Bepaalt de oriëntatie van de ROV ten opzichte van het magnetisch veld

**Gyroscoop**

Houdt de rotatie en kantelbewegingen bij

**Hoeksensor (Tilt Sensor)**

Meet de hellingshoek van de ROV

**Camera (4K met lage lichtgevoeligheid)**

Live videofeed voor besturing en navigatie\
Nachtzichtfunctionaliteit

**Sonar (optioneel)**

Gebruikt voor navigatie en objectdetectie in troebel water

## 5. Systeemarchitectuur
> *Geef een overzicht van de systeemarchitectuur met diagrammen (bijv. componentendiagram, sequence diagram).*

## 6. Technologieën en Tools
### Programmeertalen
> *C++ Python*
### Frameworks
> *Gazebo? *
### Bibliotheken
> * C++ STL en alle andere libraries die van note zijn*
### Ontwikkeltools
> * VSCode*
### Versiebeheer
> *Git met linkt*

## 7. Functionaliteiten
> *Lijst van de belangrijkste functionaliteiten met korte beschrijvingen.*

## 8. Ontwerp
### 8.1 Use Cases
### 8.2 Datamodel
### 8.3 User Interface
> *Mock-ups, wireframes en uitleg van de gebruikersinterface.*

## 9. Implementatie
> *Beschrijving van de implementatie per module/onderdeel, inclusief codevoorbeelden indien nodig.*

## 10. Testen
### Teststrategie
### Testgevallen
### Testresultaten

## 11. Resultaten
> *Samenvatting van de behaalde resultaten en hoe deze voldoen aan de eisen en wensen.*

## 12. Adviesrapport
> *Korte evaluatie van het project, en wat er verder ondernomen moet worden.*

## 13. Bijlagen
### Bronnen
### Broncode
### Technische documentatie
### Installatiehandleiding
### Sprintverslagen

---

**Auteur:** Matthijs Vos
**Datum:** MM-DD-YYYY
**Versie:** 1.0