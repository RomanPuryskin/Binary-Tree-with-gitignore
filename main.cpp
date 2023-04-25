#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "BinaryTree.cpp"
#include "test.cpp"
int main()  
{
 int pupmax , pupmin;
  BinaryTree tree;
  for(int i=10;i>2;i--)
    tree.addNode(i);
tree.deleteNode(10);
tree.PrintTree(2,3);
 // pup = tree.Count(tree.getRoot());
  //tree.PrintLeaves(tree.getRoot());
  //pup=tree.Count(tree.getRoot());
  //pup = tree.sumKeys(tree.getRoot());
  //std::cout<<pupmin;*/
 BinaryTreeTester tester;
    for (int size = 10; size < 50; size += 10) {
        tester.test(size);
    }
  return 0;
}