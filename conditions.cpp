#include <iostream>

int main() {

    int a;
    std::cout << "A:";
    std::cin >> a;

    if (a > 10) {
        std::cout << "A is greater than 10";
    } else {
         std::cout << "A is less than 10" <<std::endl;
    }

    return 0;
}