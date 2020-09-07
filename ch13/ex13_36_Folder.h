#ifndef EX13_36_FOLDERS_H_
#define EX13_36_FOLDERS_H_

#include <set>
#include "ex13_34_Message.h"

class Folder {
public:
    void addMsg(Message *m);
    void remMsg(Message *m);
private:
    std::set<Message*> messages;
};

#endif