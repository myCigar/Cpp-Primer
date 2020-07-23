#ifndef EX7_27_H_
#define EX7_27_H_

#include <iostream>
#include <string>

class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') { }
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }
    char get() const;
    char get(pos r, pos c) const; 
    Screen &move(pos r, pos c);
    Screen &set(char ch);
    Screen &set(pos r, pos c, char ch);
    Screen &display(std::ostream &os);
    const Screen &display(std::ostream &os) const;
private:
    pos cursor;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const { os << contents;}
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

inline
Screen &Screen::set(char ch)
{
    contents[cursor] = ch;
    return *this;
}

inline
Screen &Screen::set(pos r, pos c, char ch)
{
    contents[r*width + c] = ch;
    return *this;
}

#endif
