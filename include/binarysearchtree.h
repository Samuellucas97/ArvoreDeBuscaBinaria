/**
 * @file 		binarysearchtree.h 
 * @brief		Contém a classe BinarySearchTree a implementação de seus métodos
 * @author 		Samuel Lucas de Moura Ferino
 * @since 		26.04.2018
 * @version 	0.0.4
*/

#ifndef	_BINARYSEARCHTREE_H
#define	_BINARYSEARCHTREE_H

#include "node.h"
#include <ostream>

/**
 * @class 		BinarySearchTree
*/
template< typename T>
class BinarySearchTree{
	
	/// ATRIBUTOS

	private:
	
		/**<	Nó raiz */
		Node<T>* raiz;

	/// MÉTODOS	

	public:


		/**
		 * @brief	Construtor padrão e parametrizado ao mesmo tempo
		 * @param 	raiNova			Nó novo
		 */	
		BinarySearchTree(Node<T>* raizNova = nullptr ): raiz(raizNova){}

		/**
		 * @brief	Destrutor padrão 
		 */	
		~BinarySearchTree(){	/** Vazio */	}

		/**
		 * @brief 		Método get do atributo raiz
		 * @return 		Nó raiz
		*/
		Node<T>* getRaiz(){ return raiz; }

		/**
		 * @brief 		Método get do atributo raiz
		 * @return 		raizNova		Novo nó raiz
		*/
		void setRaiz( Node<T>* raizNova){
			this->raiz = raizNova;
		}

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
