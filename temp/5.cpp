#include <iostream>

using namespace std;

unsigned count_calls()
{
	static unsigned cnt = 0;
	return ++cnt;
}

int main()
{
	cout << count_calls() << endl;
	cout << count_calls() << endl;
	cout << count_calls() << endl;
	return 0;
}
