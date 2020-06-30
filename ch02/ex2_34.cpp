#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r;	 	// a --> int
	const int ci = i, &cr = ci;
	auto b = ci;    // b --> int(¶¥²ãconst±»¶ªµô)
	auto c = cr;    // c --> int
	auto d = &i;    // int *
	auto e = &ci;   // const int *
	const auto f = ci; // const int
	auto &g = ci;   // const int
	
	a = 42;	// right: int to int
	b = 42; // right: int to int
	c = 42; // right: int to int 
	d = 42; // error: int to int*
	e = 42; // error: int to const int *
	g = 42; // error: int to const int
	
	return 0;
}
