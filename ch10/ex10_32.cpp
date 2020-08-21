#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "Sales_item.h"

int main()
{
    std::istream_iterator<Sales_item> in(std::cin), eof;
    std::ostream_iterator<Sales_item> out(std::cout);
    std::vector<Sales_item> salesVec;

    while (in != eof) 
    {
        salesVec.push_back(*in++);
    }

    std::sort(salesVec.begin(), salesVec.end(), 
        [](const Sales_item &item1, const Sales_item &item2) { return item1.isbn() < item2.isbn(); });

    for (auto beg = salesVec.cbegin(), end = beg; beg != salesVec.cend(); beg = end)
    {
        end = std::find_if(beg, salesVec.cend(), [beg](const Sales_item &item) { return beg->isbn() != item.isbn(); });
        out = std::accumulate(beg, end, Sales_item(beg->isbn()));
        std::cout << std::endl;
    }
	
	return 0;
}
