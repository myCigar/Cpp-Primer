#include <iostream>

using namespace std;

int main()
{
	// ��������������, ~'q'<<6�ȼ���(~'q') << 6, ���Ϊ0x80 
	unsigned char res = ~'q' << 6;
	printf("%d\n", res); 
	return 0;
}
