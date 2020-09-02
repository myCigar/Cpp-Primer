#include <iostream>
#include <vector>
#include <memory>

using std::vector;

void print(std::shared_ptr<vector<int>> iVecPtr)
{
    for (const int &i : *iVecPtr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void read(std::shared_ptr<vector<int>> iVecPtr)
{
    int num;
    while (std::cin >> num)
    {
        iVecPtr->push_back(num);
    }
}

int main()
{
    std::shared_ptr<vector<int>> iVecPtr(new vector<int>());
    read(iVecPtr);
    print(iVecPtr);

    return 0;
}