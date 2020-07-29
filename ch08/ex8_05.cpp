#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream input("data.txt");
    vector<string> file_vec;
    
    if (input)
    {
        string str;
        while (input >> str)
        {
            file_vec.push_back(str);
            cout << str << endl;
        }
    }
    else
    {
        cerr << "File not exists!" << endl;
    }

    return 0;
}