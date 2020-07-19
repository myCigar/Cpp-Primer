#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;   
}

int mul(int a, int b)
{
    return a * b;
}

int divisor(int a, int b)
{
    try {
        if (b == 0)
            throw logic_error("The divisor cannot be zero.");
        
        return a * 1.0 / b;
    }
    catch (logic_error err) {
        cout << err.what() << endl;
        return -1;
    }
}


int main()
{
    vector<int(*) (int, int)> calcVec;

    calcVec.push_back(add);
    calcVec.push_back(sub);
    calcVec.push_back(mul);
    calcVec.push_back(divisor);

    cout << calcVec[0](20, 10) << endl;
    cout << calcVec[1](20, 10) << endl;
    cout << calcVec[2](20, 10) << endl;
    cout << calcVec[3](20, 10) << endl;
    cout << calcVec[3](20, 0) << endl;

    return 0;
}