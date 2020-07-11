#include <iostream>
using namespace std;

int main()
{
	string str("Hello, my name is jiahao. I am very luckily to join you!");
	int count = 0;
	for (auto c : str)
	{
		if (ispunct(c))
		{
			++count;
		}
	}
	
	cout << count << endl;
	return 0;
} 
