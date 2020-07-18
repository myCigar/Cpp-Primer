#include "ex6_08.h" 

using namespace std;

int main()
{
	cout << f() << endl;
	cout << calc(2, 5) << endl;
	cout << square(3.14) << endl;
	
	return 0;
}

string f()
{
	return "f() is called.";
}

int calc(int v1, int v2)
{
	return v1 * v2;
}

double square(double x)
{
	return x * x;
}
