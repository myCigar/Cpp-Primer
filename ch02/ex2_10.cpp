#include <iostream>
#include <string>

std::string global_str; 	// "" 
int global_int; 			// 0 

int main()
{
	int local_int;			// 内置类型的局部变量初始值不确定 
	std::string local_str;	// "" 
	return 0;
} 
