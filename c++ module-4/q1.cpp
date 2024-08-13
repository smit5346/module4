#include <iostream>
using namespace std;
class Calculator 
{
public:
    
    double add(double a, double b) 
	{
        return a + b;
    }

    
    double subtract(double a, double b) 
	{
        return a - b;
    }

    
    double multiply(double a, double b) 
	{
        return a * b;
    }

    
    double divide(double a, double b) 
	{
        if (b != 0) 
		{
            return a / b;
        }
		 else 
		{
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }
};

int main() 
{
    Calculator calc;
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    double result;
    switch (operation) 
	{
        case '+':
            result = calc.add(num1, num2);
            break;
        case '-':
            result = calc.subtract(num1, num2);
            break;
        case '*':
            result = calc.multiply(num1, num2);
            break;
        case '/':
            result = calc.divide(num1, num2);
            break;
        default:
            std::cerr << "Error: Invalid operation!" << std::endl;
            return 1;
    }

    cout << "Result: " << result << std::endl;

    return 0;
}

