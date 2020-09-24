#include <iostream>
#include <vector>

void naloga_36 () {
    int stevilo;
    std::cin >> stevilo;
    while (stevilo) {
        for (int i = 1; i<=stevilo;++i) {
            std::cout << i;
        };
        std::cout << std::endl;
        --stevilo;
    }
};

int main () {
    naloga_36();
    return 0;
};
