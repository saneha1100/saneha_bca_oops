#include <iostream>
#include <string>
using namespace std;

class NumberConverter
{
private:
    string numberWords[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int numbers[5];
    int index;

public:
    void acceptNumbers()
    {
        int num;
        index = 0;
        cout << "Enter five integers between 0 and 9: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> num;
            if (num >= 0 && num <= 9)
            {
                numbers[index++] = num;
            }
            else
            {
                cout << "Invalid input. Please enter a valid integer between 0 and 9." << endl;
                i--;
            }
        }
    }

    void displayNumbersInWords()
    {
        cout << "Numbers in words: ";
        for (int i = 0; i < 5; i++)
        {
            cout << numberWords[numbers[i]] << " ";
        }
        cout << endl;
    }
};

int main()
{
    NumberConverter converter;

    // Accept five integers from 0 to 9
    converter.acceptNumbers();

    // Display the equivalent values in words
    converter.displayNumbersInWords();

    return 0;
}
