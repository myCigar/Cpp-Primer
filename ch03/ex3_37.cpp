#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char *cp = ca;
	while (*cp)
	{
		cout << *cp << endl;
		++cp;
	}
	return 0;
}
