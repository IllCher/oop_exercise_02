#include <iostream>
#include <fstream>
#include <cassert>
#include "FazzyNumber.hpp"

int main() {
    fn a{}, b{};
    std::cin >> a >> b;
    std::cout << "a:\n" << a << "b:\n" << b;
    std::cout << "a + b:\n" << a + b;
    std::cout << "a - b\n" << a - b;
    std::cout << "a * b\n" << a * b;
    std::cout << "a / b\n" << a / b;
    std::cout << "1 / a\n" << fn::inv(a);
    std::cout << "a = b ? ";
    if (a == b) {
        std::cout << "1\n";
    } else {
        std::cout << "0\n";
    }
    std::cout << "a < b ? ";
    if (a < b) {
        std::cout << "1\n";
    } else {
        std::cout << "0\n";
    }
    std::cout << "a > b ? ";
    if (a > b) {
        std::cout << "1\n";
    } else {
        std::cout << "0\n";
    }
    fn c = 3.8_fn;
    std::cout << "c:\n" << c;
    return 0;
}
