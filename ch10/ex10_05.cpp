#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    const char str1[] = "hello";
    const char str2[] = "hello";
    bool is_equal = equal(cbegin(str1), cend(str1), cbegin(str2));

    cout << is_equal << endl;
    
    return 0;
}