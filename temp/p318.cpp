#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << vec.capacity() << endl;

    vec.push_back(0);
    cout << vec.capacity() << endl;

    return 0;
}