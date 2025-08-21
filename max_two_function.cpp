#include <iostream>
using namespace std;

int max_two(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int maximum = max_two(num1, num2);
    cout << "The maximum is: " << maximum << endl;

    return 0;

}