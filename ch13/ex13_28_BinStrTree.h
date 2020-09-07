#ifndef EX13_28_BIN_STR_TREE_H_
#define EX13_28_BIN_STR_TREE_H_

#include "ex13_28_TreeNode.h"

class BinStrTree {
public:
    BinStrTree() : root(new TreeNode()) { }
    BinStrTree(const BinStrTree& bTree) : root(new TreeNode(*bTree.root)) { }
    BinStrTree& operator=(const BinStrTree&);
    ~BinStrTree();
private:
    TreeNode *root;
};

BinStrTree::~BinStrTree()
{   
    delete root;
}

BinStrTree& BinStrTree::operator=(const BinStrTree& bTree)
{
    TreeNode *tmp = new TreeNode(*bTree.root);
    delete root;
    root = tmp;
    return *this;
}

#endif