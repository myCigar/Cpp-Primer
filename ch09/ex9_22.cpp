#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
    
    while (iter != mid)
    {
        if (*iter == 3)
        {
            iv.insert(iter, 2 * 3);
        }
        ++iter;
    }
    cout << *mid << endl;

    for (int &i : iv)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}