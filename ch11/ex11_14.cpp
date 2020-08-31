#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

using std::string;
using std::vector;
using std::map;
using std::pair;
using std::cout;
using std::cin;
using std::endl;

map<string, vector<pair<string, string>>> familys;

void PrintIntroMsg()
{
    cout << "Add family or name ?(enter 0-family, 1-name)" << endl;
}

void PrintFamilys()
{
    for (auto const family : familys)
    {
        cout << "Family " + family.first << endl;
        for (auto const second : family.second)
        {
            cout << family.first + " " + second.first + " " + second.second << endl;
        }
    }
    cout << endl;
}

void AddFamily()
{
    string first;
    vector<pair<string, string>> seconds;
    string tmp, birth;
    cout << "Please enter first name of your family: ";
    cin >> first;
    cout << "Please enter second names of your family: " << endl;
    while (cin >> tmp >> birth && tmp != "q")
    {
        seconds.push_back({tmp, birth});
    }
    familys[first] = seconds;
    PrintFamilys();
}

void AddName()
{
    string first;
    string second;
    string birthday;

    cout << "Please enter your name " << endl;
    cin >> first >> second >> birthday;
    
    if (familys.find(first) != familys.end())
    {
        familys[first].push_back({second, birthday});
    }
    else
    {
        cout << "Sorry, not found your family" << endl;
    }
    PrintFamilys();
}

int main()
{   
    PrintIntroMsg();
    int num;
    while (cin >> num)
    {
        if (num)
        {
            AddName();
        }
        else
        {
            AddFamily();
        }
        PrintIntroMsg();
    }
}