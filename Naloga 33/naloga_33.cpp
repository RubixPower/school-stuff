#include <iostream>

void naloga_33 () {
    char znak;
    std::cin >> znak;
    if (isupper(znak)) {
        std::cout << znak << std::endl;
    }
    else {
        std::cout << (int)znak << std::endl;
    };
};

int main () {
    naloga_33();
    return 0;
};
