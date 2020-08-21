#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>

void PrintVector(const std::vector<std::string> &words)
{
    for (const std::string &word : words)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::ifstream fin("./text.txt");
    std::istream_iterator<std::string> in(fin), eof;

    std::vector<std::string> sVec;

    while (in != eof)
    {
        sVec.push_back(*in++);
    }
    PrintVector(sVec);

    return 0;
}