#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    double result;

    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            cout << "Error! Division by zero is not allowed.";
            return 1;  // Exit the program with an error code
        }
    } else {
        cout << "Error! Invalid operator.";
        return 1;  // Exit the program with an error code
    }

    cout << num1 << " " << operation << " " << num2 << " = " << result;

    return 0;
}
