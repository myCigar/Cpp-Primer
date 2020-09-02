#include <iostream>
#include <vector>

using std::vector;

void print(const vector<int> *iVecPtr)
{
    for (const int &i : *iVecPtr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void read(vector<int> *iVecPtr)
{
    int num;
    while (std::cin >> num)
    {
        iVecPtr->push_back(num);
    }
}

int main()
{
    vector<int> *iVecPtr = new vector<int>();
    read(iVecPtr);
    print(iVecPtr);
    
    delete iVecPtr;
    return 0;
}