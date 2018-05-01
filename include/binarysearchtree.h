/**
 * @file 		binarysearchtree.h 
 * @brief		Contém a classe BinarySearchTree a implementação de seus métodos
 * @author 		Samuel Lucas de Moura Ferino
 * @since 		26.04.2018
 * @version 	0.0.9
*/

#ifndef	_BINARYSEARCHTREE_H
#define	_BINARYSEARCHTREE_H

#include "node.h"

#include <ostream>		/// cout
using std::cout;	

#include <stack>		///	stack
using std::stack;

/*!
 * \class 		BinarySearchTree
*/
template< typename T>
class BinarySearchTree{
	
	/// ATRIBUTOS

	private:
	
		/*!	\var	Node<T>* raiz	
				\brief	Nó raiz 
		 */
		Node<T>* raiz;
		
		/*! \var 	stack pilha	
		 		\brief	Guardará os nó no momento de percorrer a árvore não recursivamente
		 */
		stack<Node<T>> pilha;

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
		 * @brief		Percorre a árvore toda recursivamente, imprimindo-a
		 */
		void travellingRecursively(void) const{

			/// PRE-ORDEM

			/*!	\var	bool PERCORRER 
			  		\brief	Condição de loop continuar 
			 */
			bool PERCORRER = true;

			/*!	\var	Node<T>* copyRootPre 
			 		\brief	 Copia do nó raiz que será usado no momento de percorrer pré-ordem a árvore 
			 */
			Node<T>* copyRootPre = raiz; 			
	
			while( PERCORRER ){
				PERCORRER = preOrderTreeWalk(copyRootPree);
			}


			/// IN-ORDEM

			PERCORRER = true;
		
			/*!	\var	Node<T>* copyRootIn 
					\brief	 Copia do nó raiz que será usado no momento de percorrer em ordem a árvore	 
			 */
			Node<T>* copyRootIn = raiz; 			
	
			while( PERCORRER ){
				PERCORRER = inOrderTreeWalk(copyRootIn);
			}

			/// POS-ORDEM

			PERCORRER = true;
	
			/*!	\var	Node<T>* copyRootPos 
					\brief	 Copia do nó raiz que será usado no momento de percorrer pós-ordem a árvore	 
			 */
			Node<T>* copyRootPos = raiz; 				

			while( PERCORRER ){
				PERCORRER = posOrderTreeWalk(copyRootPos);
			}			

		}

		/**
		 * @brief		Percorre a árvore toda não recursivamente, imprimindo-a
		 */
		void travellingNonRecursively(){

			/*!	\var	Node<T>* copyRoot 
					\brief	 Copia do nó raiz que será usado no momento de percorrer em ordem a árvore	 
			 */
			Node<T>* copyRoot = raiz;				
			
			/*!	\var	bool PERCORRER 
			  		\brief	Condição de loop continuar 
			 */
			bool LOOP = true;

			while( LOOP ){ 

				if(copyRoot != nullptr){	/// CASO O NÓ **NÃO SEJA** NULO

					pilha.push(copyRoot);
					copyRoot = copyRoot->esquerda; 				

				}						

				else{						/// CASO O NÓ **SEJA** NULO

					if( !pilha.empty() ){			/// CASO A PILHA **NÃO ESTEJA** VAZIA

						copyRoot = pilha.pop();
						cout << " " + copyRoot.getChave() + " ";	
						copyRoot = copyRoot->direita;

					}

					else{							/// CASO A PILHA **ESTEJA** VAZIA

						LOOP = false;		
					}
											
				}

			}

		}
	
	private:


		///   ********* PERCORRENDO ATRAVÉS DA ÁRVORE  ********** 
	
		/**
		 *	@brief		Parte recursiva Pré-Ordem
		 * 	@param		x 	Nó atual 
		*/	
		bool preOrderTreeWalk(Node<T>* x){
			
			if( x != nullptr){			/// CASO O NÓ **NÃO SEJA** NULO
				
				cout << " " + x.getChave() + " ";
				preOrderTreeWalk( x->getEsquerda() );
				preOrderTreeWalk( x->getDireita() );

			}
			
			return false;	

		}

		/**
		 *	@brief		Parte recursiva In-Ordem
		 * 	@param		x 	Nó atual 
		*/	
		bool inOrderTreeWalk(Node<T>* x){
			
			if( x != nullptr){			/// CASO O NÓ **NÃO SEJA** NULO
				
				inOrderTreeWalk( x->getEsquerda() );
				cout << " " + x.getChave() + " ";
				inOrderTreeWalk( x->getDireita() );

			}
			
			return false;	

		}

		/**
		 *	@brief		Parte recursiva Pós-Ordem
		 * 	@param		x 	Nó atual 
		*/	
		bool posOrderTreeWalk(Node<T>* x){
			
			if( x != nullptr){			/// CASO O NÓ **NÃO SEJA** NULO
				
				posOrderTreeWalk( x->getEsquerda() );
				posOrderTreeWalk( x->getDireita() );
				cout << " " + x.getChave() + " ";

			}
			
			return false;	

		}		


};

#endif
