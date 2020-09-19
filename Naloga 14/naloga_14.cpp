#include <iostream>
void naloga_14() {
    std::string besedilo;
    std::cin >> besedilo;
    if (besedilo.length() > 2){
        for (int stevec = 2; stevec < besedilo.length();) {
            std::cout << besedilo[stevec] << std::endl;
            stevec = stevec+3;
        };
    };
};
int main() {
    naloga_14();
    return 0;
}