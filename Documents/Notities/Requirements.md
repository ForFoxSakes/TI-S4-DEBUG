# Software Requirements Specification
## Submarine Simulator voor Hulpdiensten (V-Model Aanpak)

**Document Versie:** 1.0  
**Datum:** 11 maart 2025  
**Opgesteld door:** Matthijs Vos 

---

## 1. Inleiding

### 1.1 Over dit Document
Dit Software Requirements Specification (SRS) document vormt de eerste fase van het V-model ontwikkelingsproces voor de Submarine Simulator. Het document specificeeert de gebruikersvereisten die als basis dienen voor alle volgende ontwikkelingsfasen en verificatieactiviteiten in het V-model.

### 1.2 Doel en Bereik
Dit document heeft als doel het volledig vastleggen van de requirements voor de Submarine Simulator die wordt ontwikkeld voor de brandweer. De simulator moet een nauwkeurige nabootsing bieden van de Chasing M2 ROV die de brandweer gebruikt voor noodsituaties in watergebieden in en rond Nederland.

### 1.3 Definities, Acroniemen en Afkortingen
- **ROV:** Remotely Operated Vehicle (op afstand bestuurbaar voertuig)
- **SRS:** Software Requirements Specification
- **SDLC:** Software Development Life Cycle
- **IMU:** Inertial Measurement Unit (traagheidsmeetunit)
- **V-model:** Verificatie en validatie model voor softwareontwikkeling

### 1.4 Referenties
- Chasing M2 ROV Technische Specificaties
- Brandweer Noodresponse Protocollen
- IEEE 830 SRS Standaard
- [Andere relevante documenten]

### 1.5 Overzicht van het Document
Dit document volgt de eerste fase van het V-model en legt de basis voor alle verdere ontwikkelings- en testactiviteiten. De requirements in dit document zullen direct gerelateerd worden aan verificatie- en validatieactiviteiten in de rechterhelft van het V-model.

---

## 2. Algemene Beschrijving

### 2.1 Product Perspectief
De Submarine Simulator past in het V-model als volgt:
- **Linkerzijde V-model (Ontwikkeling):** Begint met dit document, gevolgd door systeem- en detailontwerp
- **Rechterzijde V-model (Verificatie):** Elke testfase valideert tegen de corresponderende ontwikkelfase

De simulator is een zelfstandig systeem maar moet nauwkeurig het gedrag en de besturing van de fysieke Chasing M2 ROV repliceren.

### 2.2 Producteigenschappen in Relatie tot Verificatiefasen
Volgens het V-model zullen de volgende requirements direct gekoppeld worden aan specifieke testfasen:

| Eigenschap | Verificatie in V-model |
|------------|-------------------------|
| Besturingsfunctionaliteit | Component Testing |
| Fysicasimulatie | Integration Testing |
| Gebruikersinterface | System Testing |
| Complete simulatie | Acceptance Testing |

### 2.3 Gebruikersklassen en Karakteristieken
De volgende gebruikersklassen zijn geïdentificeerd voor de acceptatiefase van het V-model:

| Gebruikersklasse | Kenmerken | Acceptatiecriteria |
|------------------|-----------|-------------------|
| Brandweerlieden | Eindgebruikers met beperkte technische kennis | Intuïtieve besturing, realistische simulatie |
| Ontwikkelaars | Technische experts | Nauwkeurige nabootsing van alle componenten, testbaarheid |
| IT-ondersteuning | Systeembeheerders | Eenvoudige installatie en onderhoud |

### 2.4 Operationele Omgeving
De runtime-omgeving die ondersteund moet worden tijdens de systeemtestfase:
- De simulator draait op standaard PC-hardware met voldoende grafische mogelijkheden
- Ondersteunt standaard invoercontrollers die de fysieke onderzeeërbesturing repliceren
- Moet werken op [specifieke besturingssystemen]

### 2.5 Ontwerpbeperkingen in V-model Context
Deze beperkingen zullen invloed hebben op de architecturele ontwerpfase van het V-model:
- Modulaire architectuur voor afzonderlijke component- en integratietests
- C++ en Python als programmeertalen
- Component-based architectuur voor eenvoudige verificatie

### 2.6 Aannames en Afhankelijkheden
Aannames die invloed hebben op de verificatie- en validatiefasen van het V-model [TBD]

---

## 3. Requirements Specificatie

### 3.1 Gebruikersrequirements 
*Vormt basis voor acceptatietests in het V-model*

#### 3.1.1 Primaire Use Cases
- **UC-1:** Brandweerpersoneel moet kunnen trainen in veilige gesimuleerde omgevingen
- **UC-2:** Ontwikkelaars moeten firmwareupdates kunnen testen zonder fysieke onderzeeër
- **UC-3:** IT-ondersteuning moet meerdere instanties kunnen beheren
- **UC-4:** Instructeurs moeten trainingssessies kunnen opzetten en evalueren

#### 3.1.2 Businessrequirements
- **BR-1:** De simulator moet onderhoudskosten verlagen door minder fysiek testen
- **BR-2:** De simulator moet risico's verkleinen bij het testen van nieuwe functionaliteiten
- **BR-3:** De simulator moet trainingefficiëntie verhogen

### 3.2 Systeemrequirements
*Vormt basis voor systeemtests*

#### 3.2.1 Functionele Systeemrequirements

##### 3.2.1.1 Onderzeeërbesturingssysteem
- **SCS-1:** Het systeem MOET alle 8 thrusters van de Chasing M2 ROV simuleren met nauwkeurige fysica.
- **SCS-2:** Het systeem MOET navigatiebesturing ondersteunen, inclusief voorwaarts/achterwaarts, zijwaarts, omhoog/omlaag en yaw/pitch/roll rotaties.
- **SCS-3:** Het systeem MOET de maximale gecombineerde thrustersnelheid van 1,5 m/s simuleren.
- **SCS-4:** Het systeem MOET instelbare LED-verlichting met variabele helderheid simuleren.
- **SCS-5:** Het systeem MOET de 4K-camera met pan en tilt mogelijkheden simuleren.
- **SCS-6:** Het systeem ZOU MOETEN optionele accessoires simuleren, waaronder de manipulatorarm en lasermodule.

##### 3.2.1.2 Wateromgeving Simulatie
- **WES-1:** Het systeem MOET algemene waterweerstand en basis waterfysica simuleren.
- **WES-2:** Het systeem MOET ten minste drie soorten wateromgevingen bieden: meren, rivieren en overstroomde gebieden.
- **WES-3:** Het systeem ZOU MOETEN variërende waterzichtbaarheidscondities simuleren.
- **WES-4:** Het systeem MOET basale obstakels bevatten die relevant zijn voor het testen van onderzeeërfunctionaliteit.
- **WES-5:** Het systeem KAN waterstromen en hun effecten op onderzeeërbeweging simuleren.

##### 3.2.1.3 Sensorsimulatie
- **SS-1:** Het systeem MOET de IMU (Inertial Measurement Unit) simuleren voor versnellings- en rotatiegegevens.
- **SS-2:** Het systeem MOET de dieptesensor (druksensor) simuleren.
- **SS-3:** Het systeem MOET de temperatuursensor simuleren.
- **SS-4:** Het systeem MOET het kompas (magnetometer) simuleren.
- **SS-5:** Het systeem MOET de gyroscoop voor rotatie- en kantelbewegingen simuleren.
- **SS-6:** Het systeem MOET de hoeksensor simuleren.
- **SS-7:** Het systeem MOET de 4K-camera met nachtzichtmogelijkheden simuleren.
- **SS-8:** Het systeem ZOU MOETEN de optionele sonar voor navigatie en objectdetectie simuleren.

##### 3.2.1.4 Logging en Rapportage
- **LR-1:** Het systeem MOET gegevens van alle actuatoren en sensoren onafhankelijk loggen.
- **LR-2:** Het systeem MOET een volledig simulatierapport genereren na elke sessie.
- **LR-3:** Het systeem MOET gegevensexport in standaardformaten ondersteunen voor analyse.
- **LR-4:** Het systeem ZOU MOETEN realtime prestatie-indicatoren bieden tijdens simulatie.

##### 3.2.1.5 Trainingsscenario's
- **TS-1:** Het systeem ZOU MOETEN configureerbare noodresponse-scenario's bieden.
- **TS-2:** Het systeem KAN prestatie-evaluatiemetrieken bevatten voor trainingsdoeleinden.
- **TS-3:** Het systeem KAN scenariocreatie door instructeurs ondersteunen.

#### 3.2.2 Niet-functionele Systeemrequirements

##### 3.2.2.1 Prestatieeisen
- **PR-1:** Het systeem MOET werken met minimaal 30 frames per seconde voor vloeiende visualisatie.
- **PR-2:** Het systeem MOET fysica simuleren met voldoende nauwkeurigheid om echt onderzeeërgedrag weer te geven.
- **PR-3:** Het systeem MOET het gelijktijdig openen van meerdere instanties ondersteunen.

##### 3.2.2.2 Betrouwbaarheid
- **REL-1:** Het systeem MOET consistent gedrag behouden tijdens langdurige simulatiesessies.
- **REL-2:** Het systeem MOET minder dan 1 crash per 40 gebruiksuren hebben.

##### 3.2.2.3 Onderhoudbaarheid
- **MAIN-1:** Het systeem MOET worden geïmplementeerd met een modulaire architectuur.
- **MAIN-2:** Het systeem MOET code en functionaliteiten per module scheiden.
- **MAIN-3:** Het systeem MOET worden gedocumenteerd met uitgebreide codecommentaren en technische documentatie.

##### 3.2.2.4 Bruikbaarheid
- **USE-1:** Het systeem MOET bruikbaar zijn voor brandweerlieden met beperkte technische expertise na training.
- **USE-2:** Het systeem MOET duidelijke feedback geven voor alle gebruikersacties.

### 3.3 Subsysteem/Component Requirements
*Vormt basis voor integratietests en componententests in het V-model*

#### 3.3.1 GUI Subsysteem
- **GUI-1:** Het systeem MOET een grafische gebruikersinterface bieden die lijkt op de werkelijke onderzeeërbesturingsinterface.
- **GUI-2:** Het systeem MOET dezelfde besturingsmethoden ondersteunen als gebruikt bij de fysieke Chasing M2 ROV.
- **GUI-3:** Het systeem ZOU MOETEN een dashboard bieden dat alle sensormetingen en systeemstatus weergeeft.

#### 3.3.2 Fysica Engine Subsysteem
- **PHY-1:** De fysica-engine MOET waterweerstand accuraat modelleren.
- **PHY-2:** De fysica-engine MOET alle 8 thrusters met correcte natuurkundige interacties simuleren.
- **PHY-3:** De fysica-engine MOET botsingsdetectie ondersteunen voor de onderzeeër en omgevingsobjecten.

#### 3.3.3 Sensormodellering Subsysteem
- **SENS-1:** Het sensorsubsysteem MOET realistische data genereren voor alle sensors op basis van omgevingsfactoren.
- **SENS-2:** Het sensorsubsysteem MOET ruis en variatie in sensordata simuleren vergelijkbaar met de werkelijke onderzeeër.

#### 3.3.4 Logging en Rapportage Subsysteem
- **LOG-1:** Het loggingsubsysteem MOET alle gebeurtenissen van de simulatie vastleggen.
- **LOG-2:** Het rapportagesubsysteem MOET gestructureerde rapporten genereren voor analyse.

---

## 4. Interface Requirements
*Vormt basis voor integratietests in het V-model*

### 4.1 Gebruikersinterfaces
- **UI-1:** Het systeem MOET een grafische gebruikersinterface bieden die lijkt op de werkelijke onderzeeërbesturingsinterface.
- **UI-2:** Het systeem MOET dezelfde besturingsmethoden ondersteunen als gebruikt bij de fysieke Chasing M2 ROV.
- **UI-3:** Het systeem ZOU MOETEN een dashboard bieden dat alle sensormetingen en systeemstatus weergeeft.
- **UI-4:** Het systeem ZOU MOETEN cameraweergave bevatten vergelijkbaar met de daadwerkelijke onderzeeëroperatie.

### 4.2 Hardware Interfaces
- **HI-1:** Het systeem MOET standaard invoercontrollers ondersteunen die de fysieke besturing van de onderzeeër kunnen repliceren.
- **HI-2:** Het systeem KAN touchscreen-interfaces ondersteunen indien gebruikt door de daadwerkelijke onderzeeër.
- **HI-3:** Het systeem KAN VR-interfaces ondersteunen voor verbeterde training.

### 4.3 Software Interfaces
- **SI-1:** Het systeem MOET een API bieden voor integratie met ontwikkelingstools.
- **SI-2:** Het systeem MOET modulair ontwerp ondersteunen om toekomstige integratie met andere brandweersystemen mogelijk te maken.
- **SI-3:** Het systeem ZOU MOETEN gegevens exporteren in standaardformaten die compatibel zijn met analysetools.

### 4.4 Communicatie Interfaces
- **CI-1:** Het systeem KAN netwerkfunctionaliteiten ondersteunen voor multi-instance simulaties.
- **CI-2:** Het systeem MOET communicatieprotocollen definiëren voor alle interfaces.

---

## 5. Verificatie en Validatie Planning (V-model Rechterzijde)

### 5.1 Acceptatietestplanning
*Correspondeert met gebruikersrequirements in het V-model*

- **ATP-1:** Brandweerpersoneel zal de simulator evalueren op realisme en bruikbaarheid
- **ATP-2:** Ontwikkelaars zullen de simulator testen met bestaande firmware
- **ATP-3:** Validatiecriteria voor gebruikersacceptatie worden opgesteld
- **ATP-4:** Elke use case zal worden getest door de betreffende stakeholder

### 5.2 Systeemtestplanning
*Correspondeert met systeemrequirements in het V-model*

- **STP-1:** Volledige end-to-end tests zullen worden uitgevoerd op het complete systeem
- **STP-2:** Prestatie- en stresstest zullen worden uitgevoerd om niet-functionele requirements te valideren
- **STP-3:** Regressietests zullen worden opgezet om te verzekeren dat nieuwe functies bestaande niet beïnvloeden

### 5.3 Integratietestplanning
*Correspondeert met architecturalontwerp in het V-model*

- **ITP-1:** Alle subsystemen zullen stap voor stap worden geïntegreerd
- **ITP-2:** Interface compatibiliteit tussen modules zal worden getest
- **ITP-3:** Integratie met hardware controllers zal worden gevalideerd

### 5.4 Componenttestplanning
*Correspondeert met detailontwerp in het V-model*

- **CTP-1:** Unit tests zullen worden ontwikkeld voor elke kerncomponent
- **CTP-2:** Geautomatiseerde tests zullen worden opgezet voor continue integratie
- **CTP-3:** Elke componenttest zal direct teruggekoppeld worden aan de specifieke requirements

---

## 6. Traceerbaarheidsmatrix

### 6.1 Requirements Traceerbaarheid naar V-model Testfasen

| Requirement ID | Beschrijving | V-model Testfase | Testcase ID |
|----------------|-------------|-------------------|-------------|
| UC-1 | Training in veilige omgeving | Acceptatietest | ATP-1 |
| SCS-1 | Simulatie 8 thrusters | Systeemtest | STP-1 |
| PHY-1 | Waterweerstand modellering | Integratietest | ITP-1 |
| GUI-1 | Grafische interface | Componenttest | CTP-1 |

*Opmerking: De volledige traceerbaarheidsmatrix zal alle requirements koppelen aan specifieke testcases*

---

## 7. Bijlagen

### 7.1 Analysemodellen
- Use Case Diagrammen
- SysML Blokdiagrammen
- Traceerbaarheidsmatrices

### 7.2 V-model Ontwikkelingsstappen
1. Requirements Specificatie (dit document)
2. Systeemontwerp
3. Architectuurontwerp
4. Detailontwerp
5. Implementatie
6. Componententest
7. Integratietest
8. Systeemtest
9. Acceptatietest

### 7.3 Probleemlijst
[Wordt ingevuld tijdens ontwikkeling]