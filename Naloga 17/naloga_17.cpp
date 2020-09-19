#include <iostream>

bool deljivost(int x, int y) {
    if ((x % y) == 0) {
        return true;
    }
    return false;
}
void naloga_17() {
    for (int stevilo = 1; stevilo<=300; ++stevilo) {
        if (deljivost(stevilo, 2)) {
            if (deljivost(stevilo, 7)) {
                std::cout << stevilo << std::endl;
            };
        };
    };
};

int main() {
    naloga_17();
    return 0;
};