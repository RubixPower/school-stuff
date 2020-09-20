#include <iostream>

bool deljivost(int x, int y) {
    if ((x % y) == 0) {
        return true;
    }
    return false;
}

void naloga_21() {
    int interval[40];
    // doloci vrednost vsakemu elementu
    for (int i=10; i<=50; ++i) {
        interval[i-10] = i;
    }
    // izpisi stevila ki so liha
    for (int stevilo : interval) {
        if (!deljivost(stevilo, 2)) {
            std::cout << stevilo << std::endl;
        }
    }

}

int main () {
    naloga_21();
    return 0;
}