#include <iostream>

void naloga_34 () {
    while (true) {
        char znak;
        std::cin >> znak;
        if ((int)znak == 38) {
            break;
        }
        else if (islower(znak)) {
            std::cout << znak << std::endl;
        }
        else {
            std::cout << (int)znak << std::endl;
        };
    };
};

int main () {
    naloga_34();
    return 0;
};
