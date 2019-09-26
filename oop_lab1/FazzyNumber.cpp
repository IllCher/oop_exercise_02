#include <iostream>
#include <cassert>
#include "FazzyNumber.hpp"
fn::fn():array{0,0} {}
fn::fn(double a, double b): array{a, b} {}
void fn::print_value() {
    std::cout<<array[0]<<" "<<array[1]<<std::endl;
}
fn fn::sum(const fn &a, const fn &b) {
    fn result;
    result.array[0] = a.array[0] + b.array[0];
    result.array[1] = a.array[1] + b.array[1];
    return result;
}
fn fn::difference(const fn &a, const fn &b) {
    fn result;
    result.array[0] = a.array[0] - b.array[1];
    result.array[1] = a.array[1] - b.array[0];
    return result;
}
fn fn::comp(const fn &a, const fn &b) {
    fn result;
    result.array[0] = a.array[0] * b.array[0];
    result.array[1] = a.array[1] * b.array[1];
    return result;
}
fn fn::division(const fn &a, const fn &b) {
    fn result;
    assert(b.array[0] * b.array[1]);
    result.array[0] = a.array[0] / b.array[1];
    result.array[1] = a.array[1] / b.array[0];
    return result;
}
fn fn::inv(const fn &a) {
    fn result;
    assert(a.array[1] * a.array[0]);
    result.array[0] = 1 / a.array[1];
    result.array[1] = 1 / a.array[0];
    return result;
}
void fn::comparison(const fn &a, const fn &b) {
    if (((a.array[0]+a.array[1])/2) > ((b.array[0]+b.array[1])/2)) {
        std::cout<<"the first operand is bigger than second\n";
    } else if (((a.array[0]+a.array[1])/2) < ((b.array[0]+b.array[1])/2)) {
        std::cout<<"the second operand is bigger than first\n";
    } else {
        std::cout<<"operands are equivalent\n";
    }
}

