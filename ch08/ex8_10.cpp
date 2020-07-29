#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    vector<string> str_vec;
    ifstream ifs("data.txt");
    string tmp;
    while (getline(ifs, tmp))
    {
        str_vec.push_back(tmp);
    }
    cout << str_vec.size() << " lines" << endl;
    
    for (auto beg = str_vec.begin(); beg != str_vec.end(); ++beg)
    {
        istringstream is(*beg);
        string word;
        while (is >> word)
        {
            cout << word << endl;
        }
    }
    return 0;
}