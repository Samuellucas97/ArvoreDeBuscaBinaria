/**
 * @file 		binarysearchtree.h 
 * @brief		Contém a classe BinarySearchTree a implementação de seus métodos
 * @author 		Samuel Lucas de Moura Ferino
 * @since 		26.04.2018
 * @version 	0.0.7
*/

#ifndef	_BINARYSEARCHTREE_H
#define	_BINARYSEARCHTREE_H

#include "node.h"

#include <ostream>
using std::cout;

#include <memory>
using std::unique_ptr;

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
		 * @brief	Construtor padrão
		 */	
		BinarySearchTree(){
			raiz = new Node<T>();
		}

		/**
		 * @brief	Construtor parametrizado ao mesmo tempo
		 * @param 	raizNova			Nó novo
		 */	
		BinarySearchTree(Node<T>* raizNova ): raiz(raizNova){}

		/**
		 * @brief	Destrutor padrão 
		 */	
		~BinarySearchTree(){	
			delete raiz; 
		}

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


		/**
		 * @brief		Percorre a árvore toda, imprimindo
		 */
/*		void travellingRecursive(void) const{
	
			bool PERCORRER = true;

			/// PRE-ORDEM
			while( PERCORRER ){
				PERCORRER = preOrderTreeWalk(raiz);
			}

			PERCORRER = true;

			/// IN-ORDEM
			while( PERCORRER ){
				PERCORRER = inOrderTreeWalk(raiz);
			}

			PERCORRER = true;

			/// POS-ORDEM
			while( PERCORRER ){
				PERCORRER = posOrderTreeWalk(raiz);
			}			

		}
*/	
	private:


		///   ********* RUNNING THROUGH THE TREE  ********** 
/*	

		bool preOrderTreeWalk(Node<T>* x){
			
			if( x != nullptr)
				
				cout << " " + x.getChave() + " ";
				preOrderTreeWalk( x->getEsquerda() );
				preOrderTreeWalk( x->getDireita() );

			}
			
			return false;	

		}

		bool inOrderTreeWalk(Node<T>* x){
			
			if( x != nullptr)
				
				inOrderTreeWalk( x->getEsquerda() );
				cout << " " + x.getChave() + " ";
				inOrderTreeWalk( x->getDireita() );

			}
			
			return false;	

		}

		bool posOrderTreeWalk(Node<T>* x){
			
			if( x != nullptr)
				
				posOrderTreeWalk( x->getEsquerda() );
				posOrderTreeWalk( x->getDireita() );
				cout << " " + x.getChave() + " ";

			}
			
			return false;	

		}		

*/
};

#endif
