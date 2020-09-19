#include <iostream>

void naloga_13() {
    std::string besedilo;
    std::cout << "vpisi besedilo: ";
    std::cin >> besedilo;
    std::cout << std::endl;
    // po vrstnem redu
    for (int stevec=0; stevec <= besedilo.length(); ) {
        std::cout << besedilo[stevec] << std::endl;
        stevec = stevec + 1;
    };

    // v obratnem vrstnem redu
    for (int stevec=besedilo.length(); stevec >= 0;) {
        std::cout << besedilo[stevec] << std::endl;
        stevec = stevec - 1;
    };
};
int main() {
    naloga_13();
    return 0;
}