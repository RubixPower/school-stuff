#include <iostream>
#include <cmath>

void naloga_27 () {
    int stevilo;
    std::cin >> stevilo;
    if (stevilo%2) {
        unsigned int powered = pow(stevilo, 10);
        std::cout << powered << std::endl;
    }
    else {
        std::cout << "sodo stevilo" << std::endl;
    };
};

int main () {
    naloga_27();
    return 0;
};
