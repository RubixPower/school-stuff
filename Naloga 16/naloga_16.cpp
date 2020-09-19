#include <iostream>

void naloga_16 () {
    int stevilo;
    for (int i = 0; i<5;++i) {
        std::cin >> stevilo;
        if (stevilo > 0) {
            std::cout << "pozitivno" << std::endl;
        }
        else {
            std::cout << "negativno" << std::endl;
        };
    };
};
int main () {
    naloga_16();
    return 0;
};