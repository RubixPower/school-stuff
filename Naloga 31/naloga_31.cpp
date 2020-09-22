#include <iostream>
int funk_y(int x) {
    int y;
    if (x < 5) {
        y=x*10;
    }
    else {y=x;};
    return y;
};
void naloga_31 () {
    for (int x=1;x<=10;++x) {
        std::cout << funk_y(x) << std::endl;
    };
};

int main () {
    naloga_31();
    return 0;
};
