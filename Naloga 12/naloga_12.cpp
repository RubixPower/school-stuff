#include <iostream>

void naloga_12 () {
    int st1, st2;
    std::cin >> st1;
    std::cin >> st2;
    std::cout << "-----" << std::endl;
    for (int i = 1 ;i <= st1;++i) {
        std::cout << st2 << std::endl;
    }
}

int main () {
    naloga_12();
    return 0;
};

