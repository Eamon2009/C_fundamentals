#include <iostream>
using namespace std;

int main()
{
       double num1, num2;

       // Taking input from user
       cout << "Enter first number: ";
       cin >> num1;

       cout << "Enter second number: ";
       cin >> num2;

       // Addition
       double sum = num1 + num2;

       // Subtraction
       double difference = num1 - num2;

       // Division (check division by zero)
       double division;
       if (num2 != 0)
       {
              division = num1 / num2;
       }
       else
       {
              cout << "Division by zero is not allowed." << endl;
              division = 0;
       }

       // Display results
       cout << "\nResults:" << endl;
       cout << "Addition: " << sum << endl;
       cout << "Subtraction: " << difference << endl;

       if (num2 != 0)
       {
              cout << "Division: " << division << endl;
       }

       return 0;
}