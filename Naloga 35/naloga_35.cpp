#include <iostream>

void naloga_35 () {
    int a, b;
    std::cout << "vstavi dolzino stranic a: ";
    std::cin >> a;
    std::cout << "vstavi dolzino stranic b: ";
    std::cin >> b;
    for (int tmp1 = b; tmp1 > 0; --tmp1) {
        for (int tmp2 = a; tmp2 > 0; --tmp2) {std::cout << "*";};
        std::cout << std::endl;
    };
};

int main () {
    naloga_35();
    return 0;
};
