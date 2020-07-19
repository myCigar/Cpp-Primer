string (&func())[10];

auto func() -> string(&)[10];

string arrS[10];
decltype(arrS)& func();
#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = 's')
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    cout << make_plural(2, "word") << endl;
    
    return 0;
}