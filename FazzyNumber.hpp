#ifndef LAB1_FAZZYNUMBER_HPP
#define LAB1_FAZZYNUMBER_HPP

class fn {
public:
    fn();
    fn(double a, double b);
    fn operator+(const fn &b);
    fn operator-(const fn &b);
    fn operator*(const fn &b);
    fn operator/(const fn &b);
    bool operator==(const fn &b);
    bool operator<(const fn &b);
    bool operator>(const fn &b);
    static fn inv(const fn &a);
    friend std::ostream &operator<<(std::ostream &out, fn const &a);
    friend std::istream &operator>>(std::istream &in, fn &a);
private:
    double array[2];
};
fn operator"" _fn(long double);
#endif //LAB1_FAZZYNUMBER_HPP
