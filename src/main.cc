#include "Logger.hh"
#include <iostream>
#include <string>

int berekenFactorial(int n) {
    log("Start berekenFactorial met n = " + std::to_string(n));
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
        log("Intermediate result at i = " + std::to_string(i) +  " is " + std::to_string(result));
    }
    log("Eind berekenFactorial met result = " +std::to_string(result));
    return result;
}

int main() {
    std::cout << "Factorial van 5 is " << berekenFactorial(5) << "\n";;
    return 0;
}