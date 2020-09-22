#include <iostream>

void naloga_30 () {
    int x, y=0;
    std::cin >> x;
    if (x < 1) {
        y = x*10;
    }
    else {
        y = x;
    }
    std::cout << y << std::endl;
};

int main () {
    naloga_30();
    return 0;
};
