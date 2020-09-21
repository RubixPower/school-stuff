#include <iostream>

void naloga_28 () {
    unsigned int stevec = 1;
    unsigned int vsota = 0;
    unsigned int stevec_stevilo[2] = {0,0}; // stevilo, stevec
    unsigned int stevilo;
    while (true) {
        std::cin >> stevilo;
        if (stevilo == 0) {break;}
        else if (stevilo > stevec_stevilo[0]) {
            stevec_stevilo[0] = stevilo;
            stevec_stevilo[1] = stevec;
        };
        ++stevec;
        vsota += stevilo;
    };
    std::cout << "najvecje stevilo je: " << stevec_stevilo[0] << ", ki je bilo " << stevec_stevilo[1] << " po vrsti" << std::endl;
    std::cout << "vsota stevil je: " << vsota << std::endl;
};

int main () {
    naloga_28();
    return 0;
};
