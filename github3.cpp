#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    string name;
    int marks[5];
    char grade;

public:
    void getDetails()
    {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);

        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayDetails()
    {
        float average = 0;

        for (int i = 0; i < 5; i++)
        {
            average += marks[i];
        }

        average /= 5;

        if (average > 80)
        {
            grade = 'E';
        }
        else if (average >= 70 && average <= 80)
        {
            grade = 'A';
        }
        else if (average >= 60 && average < 70)
        {
            grade = 'B';
        }
        else if (average >= 50 && average < 60)
        {
            grade = 'C';
        }
        else
        {
            grade = 'F';
        }

        cout << "\nStudent Name: " << name;
        cout << "\nMarks for five subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << "\nGrade: " << grade;
    }
};

int main()
{
    Students student;

    // Get student details
    student.getDetails();

    // Display student details
    student.displayDetails();

    return 0;
}
