#include <iostream>

int main()
{
	std::cout << "/*";  // �Ϸ�
	std::cout << "*/";  // �Ϸ�
	//std::cout << /* "*/" */;  // ���Ϸ� 
	std::cout << /* "*/" /* "/*" */;  // �Ϸ� 
	return 0;
}
