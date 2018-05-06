/**
 * @file      main.cpp
 * @brief     Contém a função main e alguns testes com as classes Node e BinarySeachTree
 * @author    Samuel Lucas de Moura Ferino
 * @since     26.04.2018
 * @version   0.0.8
 */ 
 
 
/// BILIOTECAS STL 
#include <iostream>
using std::cout;
using std::endl;

/// BILIOTECAS PRÓPRIAS
#include "Node.h"
#include "BinarySeachTree.h"

int main() {
  
  //// NÓ
  
  // 1° TESTE
    
  Node<int>* b = new Node<int>(10);
  Node<int> c (b->getChave(), b, b->getEsquerda() );

  // 2° TESTE

  Node<int>* a;
  a = new Node<int>();
  Node<int>* g = a->getEsquerda();
  a->setEsquerda(b);
  
  // 3° TESTE
    
  cout << "Conteudo do filho esquerdo do no a: " << a->getEsquerda()->getChave() << std::endl << a->getChave() << std::endl;
  

  //// ÁRVORE DE BUSCA BINÁRIA

  BinarySearchTree<int> tree;

  if(tree.empty()){
    std::cout << "A arvore esta vazia!" << std::endl;;
  }
  
  std::cout <<"Tamanho da arvore: "<< tree.size() << std::endl; 
  
  tree.insert(30);  
  tree.insert(-3); 
  tree.insert(-3); 
  tree.insert(150); 
  
  std::cout << "Percorrendo a arvore: ";
  tree.travellingNonRecursively();
  std::cout << std::endl;
  return 0;  
}
