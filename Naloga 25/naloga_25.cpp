#include <iostream>

void naloga_25 () {
    std::string str_stevila;
    int vsota = 0;
    std::cin >> str_stevila;
    for (char c_stevilo : str_stevila) {
        vsota += (int)c_stevilo - 48;
    };
    std::cout << "vsota stevk je: " << vsota << std::endl;
};

int main () {
    naloga_25();
    return 0;
};
