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
    std::cout << "a = b ? ";
    if (a == b) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    std::cout << "a < b ? ";
    if (a < b) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    std::cout << "a > b ? ";
    if (a > b) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    fn c = 2.5_fn;
    std::cout << "c:\n" << c;
    return 0;
}
