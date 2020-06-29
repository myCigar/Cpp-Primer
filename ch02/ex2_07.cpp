#include <iostream>

int main()
{
	// '\015'表示字符'e', '\012'表示'\n'
	// Who goes with Fergus? 
	std::cout << "Who goes with F\145rgus?\012" << std::endl;
	
	// 3.14e1L --> 3.14e1 + L --> 31.4L --> 值为31.4, 类型为long double
	// 1024f --> 1024.0 --> float
	// 3.14L --> 3.14 --> double 
}
