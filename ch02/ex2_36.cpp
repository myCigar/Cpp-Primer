#include <iostream>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;		// c --> int
	decltype((b)) d = a;	// d --> int &
	++c;	// a = 3, b = 3, c = 4, d = 3
	++d;	// a = 4, b = 3, c = 4, d = 4  
	return 0;
} 
