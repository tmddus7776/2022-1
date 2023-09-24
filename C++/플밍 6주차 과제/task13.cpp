#include<iostream>
#include<cstring>
using namespace std;

class DayOfYear
{
public:
    void output();
    void adjustDay(int num);
    int month;
    int day;
};

int main() {
    DayOfYear d1;
    d1.month = 8;
    d1.day = 20;

    d1.adjustDay(-20);
    cout << "Adjusted date is ";
    d1.output(); 
    cout << endl;
    return 0;
}
void DayOfYear::adjustDay(int num)
{
    if (num > 0) {
        int plus = day + num;
        if (month == 1 || month == 3 || month == 5 || month ==7 || month ==8 || month == 10 || month ==12) 
        {
            if (plus>31) 
                day = plus - 31;
            else 
                day = plus;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) 
        {
            if (plus>30)
                day = plus-30;
            else    
                day = plus;
        }
        else
        {
            if(plus>28)
                day = plus-28;
            else
                day = plus;
        }
        if(month==12) {
            month = 1;
        }
        else {
            month += 1;
        }
        
        
    }
    else
    {
        int minus = day + num;
        if (month==1) {
            month = 12;
        }
        else {
            month -= 1;
        }
        
        if (minus > 0)
            day = minus;
        else 
        {
            if (month == 1 || month == 3 || month == 5 || month ==7 || month ==8 || month == 10 || month ==12) 
                day = 31+minus;
            else if (month == 4 || month == 6 || month == 9 || month == 11) 
                day = 30+minus;
            else
                day = 28+minus;
        }
    }
    
}

void DayOfYear::output() 
{
    switch(month)
    {
        case 1:
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
            cout << "December "; break;
        default:
            cout << "Error in DayOfYear::output.";
    }
    cout << day;
}