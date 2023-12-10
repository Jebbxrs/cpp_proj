#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void validate_temp(double day_temp[7]);
void hiLo_temp(double day_temp[7]);

int main() {
    const char* days_week[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    double day_temp[7];

    for (int i = 0; i < 7; ++i) 
    {
        cout << "Enter the temperature for " << days_week[i] << ": ";
        cin >> day_temp[i];
        validate_temp(day_temp);
    }
    hiLo_temp(day_temp);
    return 0;
}

void validate_temp(double day_temp[7]) 
{
    for (int i = 0; i < 7; ++i) 
    {
        if (day_temp[i] > 1000) 
        {
            cout << "Invalid temperature. Program terminated." << endl;
            exit(1);
        }
    }
}

void hiLo_temp(double day_temp[7]) 
{
    double high_temp = day_temp[0], low_temp = day_temp[0];

    for (int i = 1; i < 7; ++i) 
    {
        if (day_temp[i] > high_temp)
            high_temp = day_temp[i];
        else if (day_temp[i] < low_temp)
            low_temp = day_temp[i];
    }
    system("cls");
    cout << "Highest temperature of the week: " << fixed << setprecision(2) << high_temp << endl;
    cout << "Lowest temperature of the week: " << fixed << setprecision(2) << low_temp << endl;
}