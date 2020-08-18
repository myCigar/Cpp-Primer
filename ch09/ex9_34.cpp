#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator iter = vec.begin();
    while (iter != vec.end())
    {
        if (*iter % 2)
            iter = vec.insert(iter, *iter);
        ++iter;
    }

    cout << "I think you can not print this msg. :-)" << endl;
    return 0;
}