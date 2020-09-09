#include <iostream>

void naloga_9 () {
    int stevilo, vsota = 0;
    std::cin >> stevilo;
    for (int stevec = 1; stevec <= stevilo; ++stevec) {
        vsota += stevec * (stevec + 1) / 2;
    }
    std::cout << vsota << std::endl;
};

int main () {
    naloga_9();
    return 0;
}