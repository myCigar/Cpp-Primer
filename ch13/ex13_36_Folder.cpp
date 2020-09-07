#include "ex13_36_Folder.h"

void Folder::addMsg(Message *m)
{
    messages.insert(m);
}

void Folder::remMsg(Message *m)
{
    messages.erase(m);
}

