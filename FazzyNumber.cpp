#include <iostream>
#include "FazzyNumber.h"
#include <cassert>
fn::fn():array{0,0} {};
fn::fn(double a, double b): array{a, b} {};

void fn::print_value() {
    std::cout<<"@"<<array[0]<<"@"<<" @"<<array[1]<<"@"<<std::endl;
};
fn fn::sum(fn &a, fn &b) {
    fn result;
    result.array[0] = a.array[0] + b.array[0];
    result.array[1] = a.array[1] + b.array[1];
    return result;
};
static fn::fn difference(fn &a, fn &b) {
    fn result;
    result.array[0] = a.array[0] - b.array[1];
    result.array[1] = a.array[1] - b.array[0];
    return result;
};
static fn::fn comp(fn &a, fn &b) {
    fn result;
    result.array[0] = a.array[0] * b.array[0];
    result.array[1] = a.array[1] * b.array[1];
    return result;
};
static fn::fn division(fn &a, fn &b) {
    fn result;
    assert(a.array[1] * b.array[1]);
    result.array[0] = a.array[0] / b.array[1];
    result.array[1] = a.array[1] / b.array[0];
    return result;
}
static fn::fn inv(fn &a) {
    fn result;
    assert(a.array[1] * a.array[1]);
    result.array[0] = 1 / a.array[1];
    result.array[1] = 1 / a.array[0];
    return result;
}
static void fn::comparison(fn &a, fn &b) {
    if (((a.array[0]+a.array[1])/2) > ((b.array[0]+b.array[1])/2)) {
        std::cout<<"the first operand is bigger than second\n";
    } else if (((a.array[0]+a.array[1])/2) < ((b.array[0]+b.array[1])/2)) {
        std::cout<<"the second operand is bigger than first\n";
    } else {
        std::cout<<"operands are equivalent\n";
    }
}
