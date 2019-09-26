#include <iostream>
#include <fstream>
#include <cassert>
#include "FazzyNumber.hpp"

int main() {
    double l1,r1,l2,r2;
    std::ifstream fin("test_04.txt");
    fin >> l1 >> r1 >> l2 >> r2;
    fn a{l1,r1};
    fn b{l2,r2};
    fn::sum(a,b).print_value();
    fn::difference(a,b).print_value();
    fn::comp(a,b).print_value();
    fn::division(a,b).print_value();
    fn::inv(a).print_value();
    fn::comparison(a, b);
    fin.close();
    return 0;
}