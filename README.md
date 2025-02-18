# README

## Project Overzicht
Dit project is een eenvoudige C++ toepassing met loggingfunctionaliteit, geconfigureerd via CMake en een DevContainer. De logging kan conditioneel worden in- of uitgeschakeld op basis van de buildconfiguratie (Debug of Release).

## Vereisten
Zorg ervoor dat je de volgende tools geïnstalleerd hebt:
- **CMake** (versie 3.10 of hoger aanbevolen)
- **GCC** of **Clang** als compiler
- **VSCode** met de DevContainer extensie (optioneel, maar aangeraden)

## Build en Run

### 1. Builden in Debug Mode (met logging ingeschakeld)
De debug-build activeert logging via de macro `ENABLE_LOGGING` en maakt debugging mogelijk.

```sh
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make
```
Dit genereert een uitvoerbaar bestand (`app`) met logging ingeschakeld.

Run het programma:
```sh
./app
```

### 2. Builden in Release Mode (zonder logging)
In de release-build wordt `ENABLE_LOGGING` niet gedefinieerd, waardoor de logging wordt uitgeschakeld en de code geoptimaliseerd wordt.

```sh
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make
```
Run het programma:
```sh
./app
```

## Debugging
Als je de Debug build gebruikt, kun je debuggen met **gdb** of de ingebouwde VSCode debugger.


### Debuggen met VSCode:


