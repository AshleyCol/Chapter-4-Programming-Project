#include <iostream>

using namespace std;

int main()
{
    int month = 0;
    int year = 0;
    
    cout << "Please enter a month(1-12): ";
    cin >> month;

    cout << "\nPlease enter a year: ";
    cin >> year;
    
    if (month == 2)
        if (year % 4 == 0)
            if (year % 100 == 0)
                if (year % 400 == 0)
                    cout << "29";
                else
                    cout << "28";
            else
                cout << "29";
        else
            cout << "28";
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        cout << "31";
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        cout << "30";
    else
        cout << "invalid input! please enter a number between 1 and 12";
}
