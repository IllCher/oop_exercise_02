#include <iostream>
#include <cassert>
#include "FazzyNumber.h"

int main() {
    double l1,r1,l2,r2;
    std::cin >> l1 >> r1 >> l2 >> r2;
    fn a{l1,r1};
    fn b{l2,r2};
    fn::sum(a,b).print_value();
    fn::difference(a,b).print_value();
    fn::comp(a,b).print_value();
    fn::division(a,b).print_value();
    fn::inv(a).print_value();
    fn::comparison(a, b);
    return 0;
}