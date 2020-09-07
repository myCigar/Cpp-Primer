#ifndef EX13_28_TREE_NODE_H_
#define EX13_28_TREE_NODE_H_

#include <string>

class TreeNode {
public:
    TreeNode() : value(std::string()), count(new int(1)), left(nullptr), right(nullptr) { }  
    TreeNode(const TreeNode& cnode) : value(cnode.value), count(cnode.count), left(cnode.left), right(cnode.right) { ++*count; }
    TreeNode& operator=(const TreeNode& enode);
    ~TreeNode();
private:
    std::string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};

TreeNode::~TreeNode()
{
    if (--*count == 0) {
        delete count;
        delete left;
        delete right;
    }
}

TreeNode& TreeNode::operator=(const TreeNode& enode)
{
    ++*enode.count;
    if (--*count == 0) {
        delete count;
        delete left;
        delete right;
    }
    count = enode.count;
    left = enode.left;
    right = enode.right;
    return *this;
}

#endif