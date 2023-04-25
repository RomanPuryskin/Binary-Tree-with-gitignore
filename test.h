#pragma once
#include "BinaryTree.h"
class BinaryTreeTester
{
public:
    BinaryTreeTester() = default;
    ~BinaryTreeTester() = default;
 
    void test(const int size);
 
protected:

    BinaryTree* allocateTree();
    void deallocateTree(BinaryTree* tree);
    
    void check_addAndCount(const BinaryTree &tree, const int size);
    void check_remove(const BinaryTree &tree, const int size);
    void check_clear(const BinaryTree &tree, const int size);
    void check_assign(const std::vector<int> lhs, const std::vector<int> rhs);
    void check_height(const BinaryTree &tree, const int size);
 
private:
    void addAndCount();
    void destructor();
    void remove();
    void clear(); 
    void assign();
    void height();
    void height_trivialCases();
    void height_longOnlyLeftSubtree();
    void height_longOnlyRightSubtree();
    void height_longOnlyLeftAndRightSubtrees();
    void height_longRandomZigzagSubtrees();
 
private:
    int m_maxSize;
};