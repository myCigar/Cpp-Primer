#ifndef EX7_32_H_
#define EX7_32_H_

#include <vector>
#include <string>

class Screen;

class Windows_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex i);
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen {
public:
    friend void Windows_mgr::clear(ScreenIndex i);
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') { }
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }
private:
    pos cursor;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const { os << contents;}
};


void Windows_mgr::clear(ScreenIndex i)
{
    Screen &screen = screens[i];
    screen.contents = std::string(screen.height * screen.width, ' ');
}


#endif