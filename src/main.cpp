/**
 * @file 		Node.h 
 * @brief		Contém a função main e alguns teste com a classe node
 * @author 		Samuel Lucas de Moura Ferino
 * @since 		26.04.2018
 * @version 	0.0.1
*/ 

#include <iostream>
#include "node.h"


int main()
{
	int a = 10;
	Node<int> aa(a);
	Node<int> bb(230);	
	std::cout << "Antes...  Chave:" << bb.getChave() << std::endl;
	bb = aa;
	bb.setChave(12);
	std::cout << "Depois... Chave:" << bb.getChave() << std::endl;
	Node<int> d;
	d.setChave(2);
	d = bb;
	std::cout << "Depois... Chave:" << d.getChave() << std::endl;


	return 0;
}