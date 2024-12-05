#include <iostream>
using namespace std;

class Factorial
{
public:
    int findFact(int num);// Step 3 
};

int Factorial ::findFact(int num)//step 4
{
    int result = 1;
    for (int i = num; i > 0; i--)
    {
        result = result * i;
    }
    return result;//step 5
}

int main()
{
    Factorial obj;
    int input;
    cout << "Input the number : ";
    cin >> input;// Step 1 Input 
    cout << "Factorial of " << input << " is : " << obj.findFact(input) << endl;// From here the flow went to class Factorial and find findFact() method ==> Step 2 
    return 0;
}
// ***************************************************************************

// #include <iostream>
// using namespace std;

// class FactorialCalculator
// {
// public:
//     int calculate(int n); // Function declaration
// };

// // Function definition outside the class
// int FactorialCalculator::calculate(int n)
// {
//     int result = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         result *= i;
//     }
//     return result;
// }

// int main()
// {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     if (number < 0)
//     {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     }
//     else
//     {
//         FactorialCalculator calculator;
//         int result = calculator.calculate(number);
//         cout << "Factorial of " << number << " is " << result << endl;
//     }

//     return 0;
// }
