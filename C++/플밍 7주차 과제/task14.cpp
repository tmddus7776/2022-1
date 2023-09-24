#include <iostream>
#include <cstdlib> 
#include<cstring>
using namespace std;

class DayOfYear
{
public:
    DayOfYear(string monthValue, int dayValue);
    DayOfYear(string monthValue);
    void input( );
    void output( );
    string getMonthStr( );
    int getDay( );
private:
    string month;
    int day;
    void testDate( );
};

int main( )
{
    string sMonth;
    int day;
    cout << "Put an abbreviation of a month (3 chars) and a day (number: ) ";
    cin >> sMonth >> day;
    DayOfYear date1(sMonth), date2(sMonth, day);
    date1.output();
    date2.output();
    return 0;
}

DayOfYear::DayOfYear(string monthValue, int dayValue) 
                          : month(monthValue), day(dayValue)
{
    testDate( );
}

DayOfYear::DayOfYear(string monthValue) : month(monthValue), day(1)
{
    testDate( );
}


//DayOfYear::DayOfYear( ) : month(1), day(1)

void DayOfYear::testDate( )
{
    if ((month !="Jan") && (month !="Fab") && (month !="Mar") && (month !="Apr") && (month !="May") && (month !="Jun") && (month !="Jul") && (month !="Oct") && (month !="Sep") && (month !="Aug") && (month !="Nov") && (month !="Dec"))
    {
        cout << "Illegal month value!\n";
        exit(1);
    }
    if ((day < 1) || (day > 31))
    {
        cout << "Illegal day value!\n";
        exit(1);
    }
}

string DayOfYear::getMonthStr( )
{
    return month;
}

int DayOfYear::getDay( )
{
    return day;
}

//Uses iostream and cstdlib:
void DayOfYear::input( )
{
    cout << "Enter the month as a number: ";
    cin >> month;
    cout << "Enter the day of the month: ";
    cin >> day;
    if ((month !="Jan") && (month !="Fab") && (month !="Mar") && (month !="Apr") && (month !="May") && (month !="Jun") && (month !="Jul") && (month !="Oct") && (month !="Sep") && (month !="Aug") && (month !="Nov") && (month !="Dec") || (day < 1) || (day > 31))
    {
        cout << "Illegal date! Program aborted.\n";
        exit(1);
    }
}

void DayOfYear::output( )
{
    if (month=="Jan") 
        cout << "January ";
    else if (month=="Fab") 
        cout << "February ";
    else if (month=="Mar") 
        cout << "March ";
    else if (month=="Apr") 
        cout << "Arpil ";
    else if (month=="May") 
        cout << "May ";
    else if (month=="Jun") 
        cout << "June ";
    else if (month=="Jul") 
        cout << "July ";
    else if (month=="Aug") 
        cout << "August ";
    else if (month=="Sep") 
        cout << "September ";
    else if (month=="Oct") 
        cout << "October ";
    else if (month=="Nov") 
        cout << "November ";
    else if (month=="Dec") 
        cout << "December ";
    else 
        cout << "Error in DayOfYear::output. Contact software vendor.";
    cout << day << endl; 
}