#include <iostream>
#include <cassert>
#include "FazzyNumber.hpp"
#include <algorithm>
fn::fn():array{0,0} {};
fn::fn(double a, double b): array{a, b} {};
void fn::print_value() {
    std::cout<<array[0]<<" "<<array[1]<<std::endl;
};
fn fn::sum(const fn &a, const fn &b) {
    fn result;
    result.array[0] = a.array[0] + b.array[0];
    result.array[1] = a.array[1] + b.array[1];
    return result;
};
fn fn::difference(const fn &a, const fn &b) {
    fn result;
    result.array[0] = a.array[0] - b.array[1];
    result.array[1] = a.array[1] - b.array[0];
    return result;
};
fn fn::mult(const fn &a, const fn &b) {
    fn result;
    double t, m, p, k;
    t = a.array[0] * a.array[1];
    m = a.array[0] * b.array[1];
    p = a.array[1] * b.array[0];
    k = a.array[0] * b.array[1];
    double maximum = std::max(std::max(std::max(t,m), p), k);
    double minimum = std::min(std::min(std::min(t,m), p), k);
    result.array[0] = minimum;
    result.array[1] = maximum;
    return result;
};
fn fn::division(const fn &a, const fn &b) {
    assert(b.array[0] * b.array[1]);
    /*result.array[0] = a.array[0] / b.array[1];
    result.array[1] = a.array[1] / b.array[0];*/
    fn result;
    double t, m, p, k;
    t = a.array[0] / a.array[1];
    m = a.array[0] / b.array[1];
    p = a.array[1] / b.array[0];
    k = a.array[0] / b.array[1];
    double maximum = std::max(std::max(std::max(t,m), p), k);
    double minimum = std::min(std::min(std::min(t,m), p), k);
    result.array[0] = minimum;
    result.array[1] = maximum;
    return result;
}
fn fn::inv(const fn &a) {
    fn result;
    assert(a.array[1] * a.array[0]);
    result.array[0] = 1 / a.array[1];
    result.array[1] = 1 / a.array[0];
    if (result.array[0] > result.array[1]){
        std::swap(result.array[0], result.array[1]);
    }
    return result;
}
int fn::comparison(const fn &a, const fn &b) {
    if (((a.array[0]+a.array[1])/2) > ((b.array[0]+b.array[1])/2)) {
        return 1;
    } else if (((a.array[0]+a.array[1])/2) < ((b.array[0]+b.array[1])/2)) {
        return -1;
    } else {
        return 0;
    }
}

