#include <iostream>
using namespace std;

class DayOfYear
{
public:
    int month;
    int day;
    int adjustDay(int a);
    void output( );
};

int main( )
{
    DayOfYear d1;
    d1.month = 8;
    d1.day = 20;

    d1.adjustDay(20);
    cout << "Adjusted date is: ";
    d1.output();
}

int DayOfYear::adjustDay(int a)
{
    if (day + a > 31)
    {
        day += a - 31;
        month++;
    }
    else if (day + a > 30)
    {
        day += a - 30;
        month++;
    }
    else if (day + a > 28)
    {
        day += a - 28;
        month++;
    }
    else if (day + a < 0)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day += a + 31;  
            month--;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            day += a + 30;  
            month--;
            break;

        case 2:
            day += a + 28;
            month--;
            break;
        }
    }
    else
    {
        day += a;
    }
    return month, day;
}

void DayOfYear::output( )
{
    switch (month)
    {
        case 1:
        case 13:
            cout << "January "; break;
        case 2:
            cout << "February "; break;
        case 3:
            cout << "March "; break;
        case 4:
            cout << "April "; break;
        case 5:
            cout << "May "; break;
        case 6:
            cout << "June "; break;
        case 7:
            cout << "July "; break;
        case 8:
            cout << "August "; break;
        case 9:
            cout << "September "; break;
        case 10:
            cout << "October "; break;
        case 11:
            cout << "November "; break;
        case 12:
        case 0:
            cout << "December "; break;
        default:
            cout << "Error in DayOfYear::output. Contact software vendor.";
    }

    cout << day;
}