#include <fstream>
#include <vector>
#include <iterator>

int main()
{
    std::ifstream fin("./numbers.txt");
    std::ofstream odd_fout("./odd.txt");
    std::ofstream even_fout("./even.txt");

    std::istream_iterator<int> in(fin), eof;
    std::ostream_iterator<int> oddIter(odd_fout, " ");
    std::ostream_iterator<int> evenIter(even_fout, "\n");

    std::vector<int> iVec;

    while (in != eof)
    {
        iVec.push_back(*in++);
    }

    for (auto beg = iVec.cbegin(); beg != iVec.cend(); ++beg)
    {
        *beg % 2 != 0 ? oddIter = *beg : evenIter = *beg;
    }


    fin.close();
    odd_fout.close();
    even_fout.close();

    return 0;
}