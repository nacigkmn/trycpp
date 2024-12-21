#include <iostream>

using namespace std;

int main()
{

    int number1, number2;
    char opr;
    double result;

    cout << "Number 1 :";
    cin >> number1;

    cout << "Number 2 :";
    cin >> number2;

    cout << "Operator (+,-,/,*) = ";
    cin >> opr;

    switch (opr)
    {
    case '+':
        cout << "Result= " << number1 + number2 << endl;
        break;

    case '-':
        cout << "Result= " << number1 - number2 << endl;
        break;

    case '/':
        if (number2 != 0)
        {
            cout << "Result= " << static_cast<double>(number1) / number2 << endl;
        }
        else
            cout << "Error: Division by zero!" << endl;
        break;

    case '*':
        cout << "Result= " << number1 * number2 << endl;
        break;

    default:
        cout << "Error: Invalid operator!" << endl;
        break;
    }

    return 0;
}