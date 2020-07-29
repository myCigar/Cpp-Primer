#ifndef EX7_23_H_
#define EX7_23_H_

#include <iostream>
#include <string>

class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, pos num) : height(ht), width(wd), contents(num, ' ') { }
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }
    char get() const;
    char get(pos r, pos c) const;
    Screen &move(pos r, pos c);
private:
    pos cursor;
    pos height = 0, width = 0;
    std::string contents;
};

inline
char Screen::get() const
{
    return contents[cursor];
}

inline 
char Screen::get(pos r, pos c) const
{
    return contents[r * width + c];
}

Screen &Screen::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}

#endif
