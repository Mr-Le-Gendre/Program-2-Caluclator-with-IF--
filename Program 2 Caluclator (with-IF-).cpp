// Program 2 Caluclator (with-IF-).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

int main() {
    // Inputs: Two integers (num1, num2) and one character (op)
    // Process: Perform the specified arithmetic operation on num1 and num2
    // Outputs: Display the result of the operation or an error message

    int num1, num2; // Hold the two numbers entered by the user
    char op; // Hold the arithmetic operation entered by the user

    // Ask the user to input the first number
    cout << "Enter first number: ";
    cin >> num1;

    // Ask the user to input the second number
    cout << "Enter second number: ";
    cin >> num2;

    // Ask the user to input the operation
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    // Perform the arithmetic operation based on user input
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
        // Check for division by zero
        if (num2 != 0) {
            // Convert num1 to double for accurate division
            double d = num1;
            cout << num1 << " / " << num2 << " = " << d / num2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else {
        // Error message for unsupported operation
        cout << "Error: Unsupported operation." << endl;
    }

    return 0;
}
