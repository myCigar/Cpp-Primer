#include <iostream>
#include <string>

using namespace std;

// if版本更容易理解，但是这种需要多次判断时，用switch会更加简洁。 

int main()
{
	int grade;
	cin >> grade;
	
	string finalgrade1 = (grade >= 90) ? "high pass" : (grade >= 75 ? "pass" : (grade >= 60 ? "low pass" : "fail"));
	cout << finalgrade1 << endl;
	
	string finalgrade2;
	if (grade >= 90)
		finalgrade2 = "high pass";
	else if (grade >= 75)
		finalgrade2 = "pass";
	else if (grade >= 60)
		finalgrade2 = "low pass";
	else
		finalgrade2 = "fail";
	cout << finalgrade2 << endl;
	
	return 0;
}
