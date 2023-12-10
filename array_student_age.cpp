#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void validate_age(int stud_age[]);
void sum_avg_age(int stud_age[]);

int main()
{
    int stud_age[6];

    validate_age(stud_age);
    return 0;
}

void validate_age(int stud_age[])
{
    for (int i = 0; i < 6; ++i)
    {
        cout << "Enter student number " << i + 1 << "'s age: ";
        cin >> stud_age[i];
         
        if (stud_age[i] <= 0)
        {
            system("cls");
            cout << "Invalid input. Program terminated." << endl;
            exit(1);
        }
    }
    system("cls");
    sum_avg_age(stud_age);
    return;
}

void sum_avg_age(int stud_age[])
{
    int sum_age = 0;
    double avg_age;

    for (int i = 0; i < 6; ++i)
    {
        sum_age += stud_age[i];
        avg_age = sum_age / 6.00;
    }

    cout << "Sum of students' ages: " << sum_age << endl;
    cout << "Average age: " << fixed << setprecision(2) << avg_age << endl;

    return;
}