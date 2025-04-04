#include "calculator.h"
#include <stdexcept>
#include <cstdlib>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

double divide(double a, double b) {
    if (b == 0) throw std::runtime_error("Division by zero");
    return a / b;
}

int factorial(int n) {
    if (n < 0) return -1;
    int result = 1;
    for (int i = 1; i <= n; ++i) result *= i;
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int randomInRange(int min, int max) {
    return rand() % (max - min + 1) + min;
}