## Onderzoek: Automatische generatie van SDF-bestanden voor robotsimulaties in Gazebo
---
### Hoofdvraag

### ```Hoe kan een efficiënte C++ parser worden ontwikkeld om XML-gebaseerde SDF (Simulation Description Format) bestanden automatisch te genereren voor robotsimulaties in Gazebo?```

---
### Voorlopige deelvragen

#### ```Wat is de structuur van SDF-bestanden in Gazebo 9.1.0 en welke elementen zijn cruciaal voor een functionele robotsimulatie?```

#### ```Welke methoden en bibliotheken in C++ zijn het meest geschikt voor het parsen en genereren van SDF-bestanden?```

#### ```Hoe kan een abstractielaag in C++ worden ontworpen die de complexiteit van XML verbergt maar toch alle functionaliteit van SDF behoudt?```

#### ```Welke prestatieverbeteringen kunnen worden bereikt door programmatische generatie van SDF-bestanden vergeleken met handmatige XML-bewerking?```

####  ```Hoe kan de parser uitbreidbaar worden gemaakt om toekomstige SDF-versies en aanpassingen te ondersteunen?```

Voor het parser project heb ik de volgende stappen in gedachten:

Eerst de structuur van SDF-bestanden grondig analyseren
Een geschikte XML bibliotheek in C++ kiezen (zoals TinyXML, Pugixml of Xerces-C++)
Een duidelijke API ontwerpen die de complexiteit van XML verbergt
Implementatie van de basisklassen voor de verschillende SDF-elementen
Testcases ontwikkelen voor verificatie