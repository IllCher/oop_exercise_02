#ifndef LAB1_FAZZYNUMBER_H
#define LAB1_FAZZYNUMBER_H

class fn {
public:
    fn();
    fn(double a, double b);
    void print_value();
    static fn sum(const fn &a, const fn &b);
    static fn difference(const fn &a, const fn &b);
    static fn comp(const fn &a, const fn &b);
    static fn division(const fn &a, const fn &b);
    static fn inv(const fn &a);
    static void comparison(const fn &a, const fn &b);
private:
    double array[2];
};
#endif //LAB1_FAZZYNUMBER_H
