/**
 * @file 		Node.h 
 * @brief		Contém a classe Node a implementação de seus métodos
 * @author 		Samuel Lucas de Moura Ferino
 * @since 		26.04.2018
 * @version 	0.0.7
*/
#ifndef	_BINARYSEARCHTREE_H
#define	_BINARYSEARCHTREE_H

#include "node.h"
#include <ostream>

template< typename T>
class BinarySearchTree{
	
	private:
	
		Node<T>* raiz;


	public:

		BinarySearchTree(){}
		~BinarySearchTree(){}
			
		/** 			******** PERCORRER RECURSIVAMENTE A ÁRVORE ********

			preOrderTreWalk(Node<T> x){
				if( x != nullptr)
					
					imprime(x.getChave() );
					inOrder(x.getEsquerda());
					inOrder(x.getDireita() );

			}

			inOrderTreeWalk(Node<T> x){
				if( x != nullptr)
					
					inOrder(x.getEsquerda());
					imprime(x.getChave() );
					inOrder(x.getDireita() );

			}

			posOrderTreWalk(Node<T> x){
				if( x != nullptr)
					
					inOrder(x.getEsquerda());
					inOrder(x.getDireita() );
					imprime(x.getChave() );

			}


		*/


		/** 
			buscarRecursivaElemento();

		*/

		/** imprimeTodoOsNos(){
			if( raiz != nullptr)
				cout <<	

				imprimeTodoOsNos( raiz-> )
		} 
		*/	

};

#endif
