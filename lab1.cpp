#include <iostream>
#include <cassert>
#include "FazzyNumber.h"

int main() {
    fn a{50,80};
    fn b{32,90};
    fn::sum(a,b).print_value();
    fn::difference(a,b).print_value();
    fn::comp(a,b).print_value();
    fn::division(a,b).print_value();
    fn::inv(a).print_value();
    fn::comparison(a, b);
    return 0;
}