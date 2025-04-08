Deep Dive into SDFormat voor Onderzeesimulatie

Overzicht SDFormat
SDFormat (Simulation Description Format) is een XML-gebaseerd formaat dat oorspronkelijk werd ontwikkeld voor Gazebo, maar nu wordt gebruikt door diverse robotica-simulatietools. Het beschrijft robots, omgevingen, objecten en simulatie-eigenschappen.
Deelvragen voor je onderzoek
1. Wat is de basisstructuur van SDFormat en hoe past deze bij een onderzeesimulatie?

Onderzoek welke elementen van SDFormat specifiek nuttig zijn voor waterdynamica
Kijk naar bestaande voorbeelden van maritieme simulaties in Gazebo
Bron: http://sdformat.org/spec

2. Hoe kun je een modulaire programmastructuur opzetten voor een simulatie?

Welke ontwerppatronen zijn geschikt voor simulatiesoftware?
Hoe kun je de simulatie-elementen (onderzeeër, water, objecten) scheiden maar laten interacteren?
Bron: https://gazebosim.org/api/gazebo/6.0/architecture.html

3. Wat zijn de beste praktijken voor het koppelen van C++ code aan SDFormat?

Onderzoek de SDFormat parsing libraries (libsdformat)
Hoe kun je dynamisch SDFormat genereren vanuit je C++ code?
Bron: https://github.com/gazebosim/sdformat

4. Hoe kun je een linker-tool ontwikkelen voor het genereren van SDF-bestanden?

Wat zijn de kerncomponenten van zo'n tool?
Hoe zou de API eruit moeten zien om gebruiksvriendelijk te zijn?
Welke validatie is nodig om correcte SDF-bestanden te garanderen?

5. Hoe implementeer je specifieke onderwaterdynamica in SDFormat?

Hoe modelleer je waterweerstand, stroming en drukkrachten?
Welke plugins zijn beschikbaar of moeten worden ontwikkeld?
Bron: https://github.com/gazebosim/gz-sim/tree/main/examples/worlds

6. Wat zijn de integratiemogelijkheden met bestaande hydrodynamica simulatietools?

Onderzoek mogelijke integratie met CFD-tools zoals OpenFOAM
Hoe kun je resultaten van externe simulaties importeren in je Gazebo-omgeving?
