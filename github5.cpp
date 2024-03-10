#include <iostream>
#include "Find_Calculation.h"
using namespace std;

int main()
{
    double n1, n2, result;

    // Get values for n1 and n2 from user
    cout << "Enter a value for n1: ";
    cin >> n1;
    cout << "Enter a value for n2: ";
    cin >> n2;

    // Compute and display the square root of n1
    result = find_Sqrt(n1);
    cout << "Square root of " << n1 << " is: " << result << endl;

    // Compute and display the cube of n1
    result = find_Cube(n1);
    cout << "Cube of " << n1 << " is: " << result << endl;

    // Compute and display n1 raised to the power of n2
    result = find_Pow(n1, n2);
    cout << n1 << " raised to the power of " << n2 << " is: " << result << endl;

    return 0;
}
