#include <iostream>
#include <string>

using namespace std;

class MyDate {
public:
    MyDate(string str_date);
    unsigned GetYear() const { return year; }
    unsigned GetMonth() const { return month; }
    unsigned GetDay() const { return day; }
    void PrintMsg();

private:
    unsigned year;
    unsigned month;
    unsigned day;
};

MyDate::MyDate(string str_date)
{
    string months[13] = {"None", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
    if (str_date.find(",") != string::npos)
    {   // January 1,1990
        string str_year = str_date.substr(str_date.find(",") + 1);
        string str_month = str_date.substr(0, str_date.find(" "));
        string str_day = str_date.substr(str_date.find(" ") + 1, str_date.find(","));

        // month
        for (int i = 1; i != 13; ++i)
        {
            if (str_month.find(months[i]) != string::npos)
            {
                this->month = i;
                break;
            }
        }
        this->year = stoi(str_year);
        this->day = stoi(str_day);
    }
    else if (str_date.find(" ") != string::npos)
    {   // Jan 1 1990
        string str_year = str_date.substr(str_date.find_last_of(" ") + 1);
        string str_month = str_date.substr(0, str_date.find_first_of(" "));
        string str_day = str_date.substr(str_date.find_first_of(" ") + 1, str_date.find_last_of(","));

        // month
        for (int i = 1; i != 13; ++i)
        {
            if (str_month.find(months[i]) != string::npos)
            {
                this->month = i;
                break;
            }
        }
        this->year = stoi(str_year);
        this->day = stoi(str_day);
    }
    else
    {   // 1/1/1990
        string str_year = str_date.substr(str_date.find_last_of("/") + 1);
        string str_month = str_date.substr(0, str_date.find_first_of("/"));
        string str_day = str_date.substr(str_date.find_first_of("/") + 1, str_date.find_last_of("/"));

        this->year = stoi(str_year);
        this->month = stoi(str_month);
        this->day = stoi(str_day);
    }
}

void MyDate::PrintMsg()
{
    cout << this->year << "年" << this->month << "月" << this->day << "日" << endl;
}

int main()
{
    MyDate date1 = MyDate("January 2,1997");
    date1.PrintMsg();

    MyDate date2 = MyDate("10/1/2019");
    date2.PrintMsg();

    MyDate date3 = MyDate("May 25 2025");
    date3.PrintMsg();

    return 0;
}