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
mkdir -p build && cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake --build .
```
Dit genereert een uitvoerbaar bestand (`MyProject`) met logging ingeschakeld.

Run het programma:
```sh
./MyProject
```

### 2. Builden in Release Mode (zonder logging)
In de release-build wordt `ENABLE_LOGGING` niet gedefinieerd, waardoor de logging wordt uitgeschakeld en de code geoptimaliseerd wordt.

```sh
mkdir -p build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```
Run het programma:
```sh
./MyProject
```

## Debugging
Als je de Debug build gebruikt, kun je debuggen met **gdb** of de ingebouwde VSCode debugger.

### Debuggen met gdb:
```sh
gdb ./MyProject
run
```
Je kunt breakpoints zetten en variabelen inspecteren.

### Debuggen met VSCode:
1. Open het project in VSCode.
2. Zorg dat de DevContainer draait (indien van toepassing).
3. Gebruik de **C++ Debugger** extensie.
4. Voeg een `launch.json` toe in `.vscode/` met een configuratie voor **gdb** of **lldb**.
5. Start een debug-sessie en zet breakpoints.

## Conditionele Logging
De logging-functionaliteit wordt beheerd door de `ENABLE_LOGGING` macro. In `CMakeLists.txt` wordt deze macro automatisch gedefinieerd bij een Debug build:

```cmake
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(ENABLE_LOGGING)
endif()
```
In de code wordt de macro gebruikt om logging alleen in te schakelen wanneer nodig:

```cpp
#ifdef ENABLE_LOGGING
    std::clog << "[LOG]: " << message << std::endl;
#endif
```
In de release build is `ENABLE_LOGGING` niet gedefinieerd, waardoor logging-berichten niet worden uitgevoerd.
