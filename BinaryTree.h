#pragma once
#include <iostream>
#include <vector>

class Node
{
private:
  int m_key;
  Node* m_left;
  Node* m_right;

public:

  ~Node() = default;

  Node()
  {
    m_key=0;
    m_left = nullptr;
    m_right = nullptr;
  }

  Node(int key)
  {
    m_key=key;
    m_left=nullptr;
    m_right=nullptr;
  }

  int GetKey()
  {
    return m_key;
  }

  Node* GetLeft()
  {
    return m_left;
  }

  Node* GetRight()
  {
    return m_right;
  }

  void SetLeft(Node* left)
  {
    m_left = left;
  }

  void SetRight(Node* right)
  {
    m_right = right;
  }

  int ChildAmount()
  {
    int amount = 0;
    if (GetLeft() != nullptr)
      amount++;
    if (GetRight() != nullptr)
      amount++;

    return amount;
  }
};


class BinaryTree
{
private:
  Node* m_root; 

public:
  BinaryTree() {m_root = nullptr;}
  ~BinaryTree();
  void DestroyTree(Node *root);
  void DestroyTree();
  void deleteSubTree(Node *root);
  void deleteAllTree();
  BinaryTree(const BinaryTree& copy);
  Node* copyTree(Node *root );
  bool isEmpty(Node *root);
  bool isEmpty();
  Node* addNode(Node *root , int key);
  Node* addNode(int key);
  Node* getRoot();
  int Count(Node *root) const;
  int Count() const; 
  void PrintTree(Node *root, int marginLeft, int Space) const;
  void PrintTree(int marginLeft , int Space) const;
  void PrintLeaves(Node *root) const;
  void PrintLeaves();
  std::vector<int> getTreeKeys();
  void getTreeKeys(Node *root , std::vector<int> &treeKeys);
  int searchMinKey();
  int searchMaxKey();
  int height(Node *root) const;
  int height() const;
  int sumKeys(Node *root);
  int sumKeys();
  Node* searchNode(Node *root , int key);
  int GetHeightKey(int key);
  BinaryTree& operator = (const BinaryTree& other);
  bool balancedTree(Node *root);
  bool balancedTree();
  Node* findParent(Node* node, Node* temp);
  void deleteNode(Node *node);
  bool deleteNode(int key);
};