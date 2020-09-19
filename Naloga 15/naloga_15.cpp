#include <iostream>

void naloga_15() {
    for (int stevec=0;stevec <= 100; ++stevec) {
        if (stevec%2){
            std::cout << stevec << std::endl;
        }
    }
}
int main () {
    naloga_15();
    return 0;
}