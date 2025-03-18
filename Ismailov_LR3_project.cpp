#include <iostream>
#include <string>

using namespace std;

int getA() {
    /*int a;
    cout << "Enter integer A: ";
    cin >> a;
    return a;*/
}

int getB() {
    /*int b;
    cout << "Enter integer B: ";
    cin >> b;
    return b;*/
}

int getC() {
    /*int c;
    cout << "Enter integer C: ";
    cin >> c;
    return c;*/
}

int calculateSum(int a, int b) {
    /*return a + b;*/
}
//sdsaddsdsa
int calculateRemainder(int sum, int c) {
    /*return sum % c;*/
}

int calculateIntegerPart(int sum, int c) {
    /*return sum / c;*/
}

int main() {
    int a = getA();
    int b = getB();
    int c = getC();

    int sum = calculateSum(a, b);
    int remainder = calculateRemainder(sum, c);
    int integerPart = calculateIntegerPart(sum, c);

    cout << "Sum of A and B: " << sum << endl;
    cout << "Remainder of the sum divided by C: " << remainder << endl;
    cout << "Integer part of the sum divided by C: " << integerPart << endl;

    return 0;
}