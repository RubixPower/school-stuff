#include <iostream>

void naloga_10 () {
    int stevilo, vsota=0;
    do {
        std::cin >> stevilo;
        if (stevilo > 33) {
            vsota += stevilo;
        }
        else {
            continue;
        };
    } while(stevilo != 0);
    std::cout << "vsota: " << vsota << std::endl;
};

int main () {
    naloga_10();
    return 0;
};