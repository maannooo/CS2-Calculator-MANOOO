#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    cout << "Add: " << add(5, 3) << endl;
    cout << "Subtract: " << subtract(5, 3) << endl;
    cout << "Multiply: " << multiply(5, 3) << endl;
    cout << "Divide: " << divide(10, 2) << endl;
    cout << "Factorial: " << factorial(5) << endl;
    cout << "GCD: " << gcd(24, 18) << endl;
    cout << "LCM: " << lcm(4, 6) << endl;
    cout << "Random: " << randomInRange(1, 10) << endl;
    return 0;
}