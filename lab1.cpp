#include <iostream>
#include <cassert>
//#include "FazzyNumber.h"
class fn {
public:
    fn():array{0,0} {};
    fn(double a, double b): array{a, b} {};
    //~fn() { std::cout<<"oh no im destroyed"<<std::endl;};
    void print_value() {
        std::cout<<"@"<<array[0]<<"@"<<" @"<<array[1]<<"@"<<std::endl;
    };
    static fn sum(const fn &a, const fn &b) {
        fn result;
        result.array[0] = a.array[0] + b.array[0];
        result.array[1] = a.array[1] + b.array[1];
        return result;
    };
    static fn difference(const fn &a, const fn &b) {
        fn result;
        result.array[0] = a.array[0] - b.array[1];
        result.array[1] = a.array[1] - b.array[0];
        return result;
    };
    static fn comp(const fn &a, const fn &b) {
        fn result;
        result.array[0] = a.array[0] * b.array[0];
        result.array[1] = a.array[1] * b.array[1];
        return result;
    };
    static fn division(const fn &a, const fn &b) {
        fn result;
        assert(a.array[1] * b.array[1]);
        result.array[0] = a.array[0] / b.array[1];
        result.array[1] = a.array[1] / b.array[0];
        return result;
    }
    static fn inv(const fn &a) {
        fn result;
        assert(a.array[1] * a.array[1]);
        result.array[0] = 1 / a.array[1];
        result.array[1] = 1 / a.array[0];
        return result;
    }
    static void comparison(const fn &a, const fn &b) {
        if (((a.array[0]+a.array[1])/2) > ((b.array[0]+b.array[1])/2)) {
            std::cout<<"the first operand is bigger than second\n";
        } else if (((a.array[0]+a.array[1])/2) < ((b.array[0]+b.array[1])/2)) {
            std::cout<<"the second operand is bigger than first\n";
        } else {
            std::cout<<"operands are equivalent\n";
        }
    }

private:
    double array[2];
};

int main() {
    fn a{3,4};
    fn b{1,1};
    fn::sum(a,b).print_value();
    fn::difference(a,b).print_value();
    fn::comp(a,b).print_value();
    fn::division(a,b).print_value();
    fn::inv(a).print_value();
    fn::comparison(a, b);
    return 0;
}