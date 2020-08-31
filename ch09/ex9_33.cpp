#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator begin = vec.begin();

    while (begin != vec.end())
    {
        ++begin;
        begin = vec.insert(begin, 42);
        ++begin; 
    }

    for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}