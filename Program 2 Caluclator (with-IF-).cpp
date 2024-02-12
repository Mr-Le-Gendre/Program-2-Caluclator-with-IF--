// Program 2 Caluclator (with-IF-).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

int main() {
    // Inputs: Two integers (num1, num2) and one character (op)
    // Process: Perform the specified arithmetic operation on num1 and num2
    // Outputs: Display the result of the operation or an error message

    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (op == '/') {
        if (num2 != 0) {
            double d = num1;
            cout << num1 << " / " << num2 << " = " << d / num2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else {
        cout << "Error: Unsupported operation." << endl;
    }

    return 0;
}