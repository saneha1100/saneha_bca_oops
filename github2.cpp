#include <iostream>
using namespace std;

class Banking
{
private:
    static float interest;
    int principal;
    int time; // in months only
    string arr2[1];

public:
    void getdata()
    {
        cout << "Enter principal amount: ";
        cin >> principal;
        cout << "Enter time in months: ";
        cin >> time;
    }

    void Calculate_SI()
    {
        // Calculate Simple Interest
        float si = (principal * interest * time) / 100;
        cout << "Simple Interest: " << si << endl;
    }

    static float getInterest()
    {
        return interest;
    }

    static void setInterest(float i)
    {
        interest = i;
    }
};

float Banking::interest = 2; // Initialize the static interest member

int main()
{
    Banking bl, b2;

    // Set the interest rate
    Banking::setInterest(3);

    // Get data for objects
    bl.getdata();
    b2.getdata();

    // Calculate Simple Interest
    bl.Calculate_SI();
    b2.Calculate_SI();

    return 0;
}
