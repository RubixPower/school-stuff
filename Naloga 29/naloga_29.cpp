#include <iostream>

void naloga_29 () {
    int vsota = 0;
    int input;
    while (vsota < 100) {
        std::cin >> input;
        vsota += input;
    };
    std::cout << "vsota je presegla 100 za: " << vsota - 100 << std::endl;
};

int main () {
    naloga_29();
    return 0;
};
