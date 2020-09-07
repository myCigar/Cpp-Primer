#ifndef EX13_34_MESSAGE_H_
#define EX13_34_MESSAGE_H_

#include <string>
#include <set>

class Folder;
class Message {
    friend class Floder;
    friend void swap(Message&, Message&);
public:
    explicit Message(const std::string &str = "") :
        contents(str) { }
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    void save(Folder&);
    void remove(Folder&);
    void addFolder(Folder*);
    void remFolder(Folder*);
private:
    std::string contents;
    std::set<Folder*> folders;
    void add_to_Folders(const Message&);
    void remove_from_Folders();
};

#endif