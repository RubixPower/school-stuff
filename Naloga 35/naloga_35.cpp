#include <iostream>

void naloga_35 () {
    int stranice, tmp;
    std::cout << "vstavi dolzino stranic: ";
    std::cin >> stranice;
    tmp = stranice;
    for (int loop1= stranice;loop1>0;--loop1) {
        for (int loop2= stranice;loop2>0;--loop2) {std::cout<<"*";};
        std::cout<<std::endl;
    };
};

int main () {
    naloga_35();
    return 0;
};
