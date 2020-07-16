#include <iostream>

using namespace std;

int main()
{
	// 由于满足左结合律, ~'q'<<6等价于(~'q') << 6, 结果为0x80 
	unsigned char res = ~'q' << 6;
	printf("%d\n", res); 
	return 0;
}
