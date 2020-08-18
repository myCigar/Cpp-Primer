#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    for (int i = 0; i != 10; ++i)
    {
        cout << i << " size: " << vec.size() << "\tcapacity: " << vec.capacity() << endl;
        while (vec.size() < vec.capacity())
        {
            vec.push_back(0);
        }
        // Try to insert a value to increase vector
        vec.push_back(0);
    }

    return 0;
}