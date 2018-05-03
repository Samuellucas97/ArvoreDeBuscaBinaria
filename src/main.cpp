#include <iostream>
#include "Node.h"
#include "BinarySeachTree.h"
int main() {
  
    //// NÓ
    
  Node<int>* b;
  b= new Node<int>(10);

  Node<int> c (b->getChave(),b, b->getEsquerda() );

  Node<int>* a;
  a = new Node<int>();


    //// ÁRVORE DE BUSCA BINÁRIA

  
  Node<int>* g = a->getEsquerda();
  
  BinarySearchTree<int> tree;
  bool encontrou = tree.searchRecursivelyBOOLEAN(10);
  
  if(encontrou)
    std::cout << "Hello World!" ;
  else
    std::cout << "Hello World BOY!"; 
    
  return 0;  
}
