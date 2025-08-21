#include<iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle error as needed
    }
    return a / b;
}

int main() {
    int a, b;
    char op;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << add(a, b) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(a, b) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case '/':
            cout << "Result: " << divide(a, b) << endl;
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}