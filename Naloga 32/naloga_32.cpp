#include <iostream>

void naloga_32 () {
    int stevilo;
    std::cin >> stevilo;
    for (int delitelj=1; delitelj <=stevilo; ++delitelj) {
        if (!(stevilo%delitelj)) {
            std::cout << delitelj << std::endl;
        };
    };
};

int main () {
    naloga_32();
    return 0;
};
