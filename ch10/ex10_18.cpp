#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    vector<string>::iterator rm_start = unique(words.begin(), words.end());
    words.erase(rm_start);
}

string make_plural(unsigned ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2) {return s1.size() < s2.size(); });
    vector<string>::iterator beg = partition(words.begin(), words.end(), [sz](const string &s) { return s.size() < sz; });
    unsigned count = words.end() - beg;

    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;

    std::for_each(beg, words.end(), [](const string &s) { cout << s << " "; });
}

int main()
{
    vector<string> words;
    string word;
    while (cin >> word)
    {
        words.push_back(word);
    }

    biggies(words, 5);
    
    return 0;
}