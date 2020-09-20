#include <iostream>

void naloga_24() {
    std::string str_stevila;
    int najvecje = 9;
    std::cin >> str_stevila;
    for (char stevilo : str_stevila) {
        if ((int)stevilo - 48 < najvecje) {
            najvecje = (int)stevilo - 48;
        };
    };
    std::cout << najvecje << std::endl;
};
int main () {
    naloga_24();
    return 0;
}