#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printVector(const vector<string> &vec)
{
    if (vec.size() == 0)
        return;
    
    cout << vec[0] << endl;
    
    #ifndef NDEBUG
        cerr << __func__ << ": vector size is " << vec.size() << endl;
    #endif

    printVector({vec.begin() + 1, vec.end()});
}


int main()
{
    printVector({"Hello", "World", "Hello"});
    return 0;
}