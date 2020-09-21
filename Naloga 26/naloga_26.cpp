#include <iostream>
int izr_vsoto(std::string str_stevilka) {
    int vsota = 0;
    for (char c_stevka : str_stevilka) {
        vsota += (int)c_stevka - 48;
    };
    return vsota;
}
void naloga_26 () {
    int vsota = 0;
    std::string str_stevilo;
    for (int i =0; i<=1; ++i) {
        std::cin >> str_stevilo;
        vsota += izr_vsoto(str_stevilo);
    };
    std::cout << "vsota stevk obeh stevil je: " << vsota << std::endl;
};

int main () {
    naloga_26();
    return 0;
};
