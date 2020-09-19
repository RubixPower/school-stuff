#include <iostream>

bool deljivost(int x, int y) {
    if ((x % y) == 0) {
        return true;
    }
    return false;
}
void naloga_19() {
    for (int stevilo = 1; stevilo<=500; stevilo++) {
        if (deljivost(stevilo, 4)) {
            if (!(deljivost(stevilo, 10))) {
                std::cout << stevilo << std::endl;
            };
        };
        
    };
};

int main() {
    naloga_19();
    return 0;
};