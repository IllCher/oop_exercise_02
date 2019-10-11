#include <iostream>
#include <cassert>
#include "FazzyNumber.hpp"
#include <algorithm>
fn::fn():array{0,0} {};
fn::fn(double a, double b): array{a, b} {};
fn fn::operator+(const fn &b) const{
    fn result;
    result.array[0] = array[0] + b.array[0];
    result.array[1] = array[1] + b.array[1];
    return result;
};
fn fn::operator-(const fn &b) const{
    fn result;
    result.array[0] = array[0] - b.array[1];
    result.array[1] = array[1] - b.array[0];
    return result;
};
fn fn::operator*(const fn &b) const{
    fn result;
    double t, m, p, k;
    t = array[0] * b.array[0];
    m = array[0] * b.array[1];
    p = array[1] * b.array[0];
    k = array[1] * b.array[1];
    double maximum = std::max(std::max(std::max(t,m), p), k);
    double minimum = std::min(std::min(std::min(t,m), p), k);
    result.array[0] = minimum;
    result.array[1] = maximum;
    return result;
};
fn fn::operator/(const fn &b) const{
    assert(b.array[0] * b.array[1] > 0);
    fn result;
    double t, m, p, k;
    t = array[0] / b.array[0];
    m = array[0] / b.array[1];
    p = array[1] / b.array[0];
    k = array[1] / b.array[1];
    double maximum = std::max(std::max(std::max(t,m), p), k);
    double minimum = std::min(std::min(std::min(t,m), p), k);
    result.array[0] = minimum;
    result.array[1] = maximum;
    return result;
}
fn fn::inv(const fn &a) {
    fn result;
    assert(a.array[1] * a.array[0] > 0);
    result.array[0] = 1 / a.array[1];
    result.array[1] = 1 / a.array[0];
    if (result.array[0] > result.array[1]){
        std::swap(result.array[0], result.array[1]);
    }
    return result;
}

bool fn::operator==(fn const &b) const{
    return ((array[0] + array[1])/2 == (b.array[0] + b.array[1])/2);
}

bool fn::operator<(fn const &b) const{
    return (array[0] + array[1])/2 < (b.array[0] + b.array[1])/2;
}

bool fn::operator>(fn const &b) const{
    return (array[0] + array[1])/2 > (b.array[0] + b.array[1])/2;
}

std::ostream &operator<<(std::ostream &out, fn const &a) {
    out << a.array[0] << " " << a.array[1] << std::endl;
    return out;
}
std::istream &operator>>(std::istream &in, fn &a) {
    in >> a.array[0] >> a.array[1];
    return in;
}

fn operator"" _fn(long double op) {
    fn result{(double)op, (double)op};
    return result;
}
