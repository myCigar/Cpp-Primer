#include <iostream>

using namespace std;

int is_repeat_call()
{
	static unsigned count_calls = 0;
	++count_calls;
	
	return count_calls == 1 ? 0 : 1;
}

int main()
{
	int val;
	while (cin >> val)
	{
		cout << is_repeat_call() << endl;
	}
	return 0;
}
