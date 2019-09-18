#ifndef LAB1_FAZZYNUMBER_H
#define LAB1_FAZZYNUMBER_H

class fn {
public:
    fn();
    fn(double a, double b);
    void print_value();
    static fn sum;
    static fn difference(fn &a, fn &b);
    static fn comp;
    static fn division;
    static fn inv(fn &a);
    static void comparison(fn &a, fn &b);
private:
    double array[2];
};
#endif //LAB1_FAZZYNUMBER_H
