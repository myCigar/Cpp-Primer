#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    std::istream_iterator<int> in(cin), eof;
    std::ostream_iterator<int> out(cout, " ");

    vector<int> iVec;

    while (in != eof)
    {
        iVec.push_back(*in++);
    }

    std::sort(iVec.begin(), iVec.end());
    std::unique_copy(iVec.begin(), iVec.end(), out);

    return 0;
}