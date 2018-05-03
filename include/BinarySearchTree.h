
/**
 * @file 		binarysearchtree.h 
 * @brief		Contém a classe BinarySearchTree a implementação de seus métodos
 * @author 		Samuel Lucas de Moura Ferino
 * @since 		26.04.2018
 * @version		0.0.9
*/

#ifndef	_BINARYSEARCHTREE_H
#define	_BINARYSEARCHTREE_H

#include "Node.h"

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
		
		/*!	\var 	stack pilha	
		 		\brief	Guardará os nó no momento de percorrer a árvore não recursivamente
		 */
		stack<Node<T>> pilha;

	/// MÉTODOS	

	public:

		/**
		 * @brief Construtor padrão.
		 *        A árvore será iniciada com um nó para facilitar na adição dos nós   
		 */	
		BinarySearchTree(){
			raiz = new Node<T>();
		}

		/**
		 * @brief   Construtor parametrizado ao mesmo tempo
		 * @param 	raizNova			Nó novo
		 */	
		BinarySearchTree(Node<T>* raizNova ): raiz(raizNova){}

		/**
		 * @brief	Destrutor padrão 
		 */	
		~BinarySearchTree(){
		  
		  destroyTheTree(raiz);
			
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

			/*!	\var	Node<T>* copyRootPre 
			 		\brief	 Copia do nó raiz que será usado no momento de percorrer pré-ordem a árvore 
			 */
			Node<T>* copyRootPre = raiz; 			
	
			preOrderTreeWalk(copyRootPre);

			/// IN-ORDEM

			/*!	\var	Node<T>* copyRootIn 
					\brief	 Copia do nó raiz que será usado no momento de percorrer em ordem a árvore	 
			 */
			Node<T>* copyRootIn = raiz; 			
	
			inOrderTreeWalk(copyRootIn);
		
			/// POS-ORDEM

			/*!	\var	Node<T>* copyRootPos 
					\brief	 Copia do nó raiz que será usado no momento de percorrer pós-ordem a árvore	 
			 */
			Node<T>* copyRootPos = raiz; 				

			posOrderTreeWalk(copyRootPos);
			
		}

		/**
		 * @brief		Percorre a árvore toda não recursivamente, imprimindo-a
		 */
		void travellingNonRecursively(){

			/*!	\var	Node<T>* copyRoot 
					\brief	 Copia do nó raiz da árvore
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

				else{		/// CASO O NÓ **SEJA** NULO

					if( !pilha.empty() ){			/// CASO A PILHA **NÃO ESTEJA** VAZIA

						copyRoot = pilha.pop();
						cout << " " + copyRoot.getChave() + " ";	
						copyRoot = copyRoot->direita;

					}

					else{			/// CASO A PILHA **ESTEJA** VAZIA

						LOOP = false;		
					}
											
				}

			}

		}
    
    /**
     * @brief   Busca recursivamente a chave na árvore
     * @param   x     Nó a partir do qual será buscado
     * @param   key   Chave a ser buscada
     * @return  Um ponteiro nulo ou o ponteiro para o nó buscado
     */ 
    Node<T>* searchRecursively(Node<T>* x, T key){
			  
			 if( x == nullptr || x->getChave() == key){ /// CONDIÇÃO DE PARADA: Chave encontrada ou ponteiro nulo (fim desse caminho )
			 
			    return x;
			 
			 }
			 else if( key > x->getChave() ){  /// A CHAVE É MAIOR QUE A CHAVE DO NÓ ATUAL. LOGO, BUSCA-SE NO NÓ/CAMINHO À DIREITA
			   
			    x = searchRecursively(x->getDireita(), key );
			 
			 }
			 else{/// A CHAVE É MENOR QUE A CHAVE DO NÓ ATUAL. LOGO, BUSCA-SE NO NÓ/CAMINHO À ESQUERDA
			   
			    x = searchRecursively(x->getEsquerda(), key );
			   
			 }
			  
			}

    /**
     * @brief   Busca recursivamente a chave na árvore
     * @param   key   Chave a ser buscada
     * @return  True se encontrado ou False senão
     */ 
		bool searchRecursivelyBOOLEAN( T key){
			
			 /*!	\var	Node<T>* copyRoot 
					\brief	 Copia do nó raiz da árvore	 
			  */
			 Node<T>* copyRoot = raiz;	
			
			copyRoot = searchRecursively(copyRoot, key);
		
			if(copyRoot == nullptr){
			  
			  return false;
			  
			}
			
			else{
			  
			  return true;
			
			}  
					
		}
	  
	  /**
     * @brief   Busca iterativamente a chave na árvore
     * @param   key   Chave a ser buscada
     * @return  Um ponteiro nulo ou o ponteiro para o nó buscado
     */ 
    Node<T>* seachIterative(T key){
	    
	    /*!	\var	Node<T>* copyRoot 
					\brief	 Copia do nó raiz que será usado no momento de percorrer em ordem a árvore	 
			 */
			Node<T>* copyRoot = raiz;
	    
	    while( copyRoot = nullptr || copyRoot->getChave() ){
	      if( key > copyRoot->getChave() ){
	        copyRoot = copyRoot->getEsquerda();
	      }
	      else{
	        copyRoot = copyRoot->getDireita();
	      }
	    }
	    
	    return copyRoot;
	    
	  }
	  
    /**
     * @brief   Busca iterativamente a chave na árvore
     * @param   key   Chave a ser buscada
     * @return  True se encontrado ou False senão
     */ 
		bool seachIterativeBOOLEAN(T key){
	  {
	    /*! \var  Node<T>* result 
	          \brief   Busca na árvore a menor chave
	     */ 
	    Node<T>* result = seachIterative(key);
	    
	    if( result == nullptr){   /// A CHAVE **FOI ENCONTRADA**
	      return false;
	    }
	    else{   /// A CHAVE **NÃO FOI ENCONTRADA** 
	      return true;
	    }
	    
	    }
	  }
	  
	  /**
	   * @brief   Busca o nó da árvore mais à esquerda
	   * @return  O nó da árvore com a menor chave
	   */ 
	  Node<T>* minimum() const{
	    
	    /*!	\var	Node<T>* copyRoot 
					\brief	 Copia do nó raiz que será usado no momento de percorrer em ordem a árvore	 
			 */
			Node<T>* copyRoot = raiz;
	    
	    while(copyRoot->getEsquerda() != nullptr){ /// ENQUANTO NÃO FOR NULO
	      copyRoot = copyRoot->getEsquerda();  
	    }
	    
	    return copyRoot;
	    
	  }
	  
	  /**
	   * @brief   Busca o nó da árvore mais à direita
	   * @return  O nó da árvore com a maior chave
	   */ 
	  Node<T>* maximum() const{
	    
	    /*!	\var	Node<T>* copyRoot 
					\brief	 Copia do nó raiz que será usado no momento de percorrer em ordem a árvore	 
			 */
			Node<T>* copyRoot = raiz;
	    
	    while(copyRoot->getDireita() != nullptr){   /// ENQUANTO NÃO FOR NULO
	      copyRoot = copyRoot->getDireita();  
	    }
	    
	    return copyRoot;
	    
	  }
	/*  
	  Node<T>* sucessor(Node<T>* x)
	  {
	    if(x->getDireita() != nullptr)
	      x = mimimunOfAnyNode( x->getDireita() );
	    }
	    
	    Node<T>* copyFather = x->getPai(); 
	     
	     while(copyFather != nullptr && copyFather->getDireita() == x )
	     {
	       
	     }
	  }
	 */
	 /*
	  Node<T>* predecessor(Node<T>* x){
	     if(x->getEsquerda() != nullptr)
	        x = maximumOfAnyNode( x->getEsquerda() )
	        return x;
	     }
	     
	     Node<T>* copyFather = x->getPai(); 
	     
	     while(copyFather != nullptr && copyFather->getDireita() == x )
	     {
	       
	     }
	  }
	  
	 */ 
	  
	 /* 
	  bool insertion(T value){
	    Node<T>* newNode(value, nullptr, nullptr, nullptr);
	    Node<T>* copyRoot = raiz;
	    
	    seachIterative()
	    
	  }
	  */
	private:
  
    /**
     * @brief   Destrói os nós da árvore
     * @param   x   Nó a terá os subnós destruídos
     */ 
    void destroyTheTree(Node<T>* x){
      
      if(x != nullptr){     /// CASO O NÓ **NÃO SEJA** NULO
        
        Node<T>* copyLeft = x->getEsquerda();
        Node<T>* copyRight = x->getDireita();
        
        destroyTheTree(copyLeft);
        destroyTheTree(copyRight);
        
        delete copyLeft;
        delete copyRight;
        
      }
      
    }

		///   ********* PERCORRENDO ATRAVÉS DA ÁRVORE  ********** 
	
		/**
		 *	@brief		Parte recursiva Pré-Ordem
		 * 	@param		x 	Nó atual 
		*/	
		void preOrderTreeWalk(Node<T>* x){
			
			if( x != nullptr){			/// CASO O NÓ **NÃO SEJA** NULO
				
				cout << " " + x.getChave() + " ";
				preOrderTreeWalk( x->getEsquerda() );
				preOrderTreeWalk( x->getDireita() );

			}

		}

		/**
		 *	@brief		Parte recursiva In-Ordem
		 * 	@param		x 	Nó atual 
		*/	
		void inOrderTreeWalk(Node<T>* x){
			
			if( x != nullptr){			/// CASO O NÓ **NÃO SEJA** NULO
				
				inOrderTreeWalk( x->getEsquerda() );
				cout << " " + x.getChave() + " ";
				inOrderTreeWalk( x->getDireita() );

			}
			
		}

		/**
		 *	@brief		Parte recursiva Pós-Ordem
		 * 	@param		x 	Nó atual 
		*/	
		void posOrderTreeWalk(Node<T>* x){
			
			if( x != nullptr){			/// CASO O NÓ **NÃO SEJA** NULO
				
				posOrderTreeWalk( x->getEsquerda() );
				posOrderTreeWalk( x->getDireita() );
				cout << " " + x.getChave() + " ";

			}

		}
		
		/**
	   * @brief   Busca o extremo nó à esquerda de qualquer nó
	   * @param   x   Nó usado como ponto de partida
	   * @return  O nó extremo à esquerda
	   */
		Node<T>* mimimunOfAnyNode(Node<T>* x){
		  
		  while(x->getEsquerda() != nullptr){
		    x = x->getEsquerda();
		  }
		  
		  return x;
		  
		}
		
		/**
	   * @brief   Busca o extremo nó à direita de qualquer nó
	   * @param   x   Nó usado como ponto de partida
	   * @return  O nó extremo à direita
	   */ 
	  Node<T>* maximumOfAnyNode(Node<T>* x){
		  
		  while(x->getDireita() != nullptr){
		    x = x->getDireita();
		  }
		  
		  return x;
		  
		}

};

#endif
