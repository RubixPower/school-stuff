#include <iostream>

bool deljivost(int x, int y) {
    if ((x % y) == 0) {
        return true;
    }
    return false;
};

void naloga_20() {
    int stevilo;
    do {
        std::cin >> stevilo;
        if (stevilo == 100) {break;};
        if (deljivost(stevilo, 2)) {
            std::cout << "sodo" << std::endl;
        }
        else {
             std::cout << "liho" << std::endl;
        };
    }while (stevilo != 100);
};
int main () {
    naloga_20();
    return 0;
};