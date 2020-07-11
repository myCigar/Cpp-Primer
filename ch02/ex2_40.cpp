#include <iostream>
#include <string>

struct Sales_data {
	std::string bookNo;
	unsigned bookCnt;
	double price;
};

Sales_data data1, data2;
int main()
{
	std::cin >> data1.bookNo >> data1.bookCnt >> data1.price;
	std::cin >> data2.bookNo >> data2.bookCnt >> data2.price;
	
	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.bookCnt + data2.bookCnt;
		double avePrice = (data1.bookCnt * data1.price + data2.bookCnt * data2.price) / totalCnt;
		std::cout << data1.bookNo << totalCnt << avePrice << std::endl;
	}
	else
	{
		std::cout << "Two different bookNo can't add" << std::endl;
	}
	return 0;
}	
