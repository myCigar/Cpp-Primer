#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vec{1, 2, 3, 4};

    vector<int> vec1(10);   // 10 times 0  
    vector<int> vec2(10, -1);   // 10 times -1
    vector<int> vec3(vec);  // {1, 2, 3, 4}
    vector<int> vec4 = vec; // {1, 2, 3 ,4}
    vector<int> vec5(vec.begin(), vec.end());   // {1, 2, 3, 4}
    vector<int> vec6{1, 2, 3};  // {1, 2, 3}
    vector<int> vec7 = {1, 2, 3};   // {1, 2, 3}

    return 0;
}