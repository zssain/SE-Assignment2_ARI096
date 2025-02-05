#include <iostream>
#include <cmath> // For pow()
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    do {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter an operator (+, -, *, /, ^, %): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            case '^':
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case '%':
                if (num1 == (int)num1 && num2 == (int)num2 && num2 != 0) // Ensure both numbers are integers
                    cout << "Result: " << (int)num1 % (int)num2 << endl;
                else
                    cout << "Error! Modulo operation requires two integers and a non-zero divisor." << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}
