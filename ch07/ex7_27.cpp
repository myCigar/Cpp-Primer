#include "ex7_27.h"

Screen &Screen::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}

Screen &Screen::display(std::ostream &os)
{
    do_display(os);
    return *this;
}

const Screen &Screen::display(std::ostream &os) const
{
    do_display(os);
    return *this;
}


int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << std::endl;
    myScreen.display(std::cout);
    std::cout << std::endl;

    return 0;
}