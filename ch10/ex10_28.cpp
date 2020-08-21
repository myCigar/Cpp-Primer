#include <iostream>
#include <string>
#include <list>

using namespace std;

void PrintList(const list<int> &iList)
{
    for (int i : iList)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    list<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> vec2;
    list<int> vec3;
    list<int> vec4;

    copy(vec.begin(), vec.end(), back_inserter(vec2));
    PrintList(vec2);

    copy(vec.begin(), vec.end(), front_inserter(vec3));
    PrintList(vec3);

    copy(vec.begin(), vec.end(), inserter(vec4, vec4.end()));
    PrintList(vec4);

    return 0;
}