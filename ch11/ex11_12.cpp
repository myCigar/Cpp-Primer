#include <iostream>
#include <utility>
#include <string>
#include <vector>

using std::pair;
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<pair<string, int>> pairs;

    string str;
    int num;
    while (cin >> str >> num)
    {
        pairs.push_back( {str, num} );
    }

    for (const pair<string, int> item : pairs)
    {
        cout << item.first << " " << item.second << endl;
    }

    return 0;
}
