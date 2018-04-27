/**
 * @file 		Node.h 
 * @brief		Contém a classe Node a implementação de seus métodos
 * @author 		Samuel Lucas de Moura Ferino
 * @since 		26.04.2018
 * @version 	0.0.3
*/ 

#ifndef _NODE_H
#define _NODE_H

/**
 * @class		Node
 */
template<typename T>
class Node{

	///	ATRIBUTOS

	private:
		
		/**<	Chave/conteúdo do nó */
		T chave;
		/**<	Ponteiro que indica quem é o nó pai do nó atual */	
		Node<T>* p;
		/**<	Ponteiro que indica quem é o nó filho da esquerda do nó atual */	
		Node<T>* esquerda;
		/**<	Ponteiro que indica quem é o nó filho da direita do nó atual */
		Node<T>* direita;

	/// MÉTODOS	
		
	public:

		
		Node(T chaveNova = T(), Node<T>* pNovo = nullptr, 
			Node<T>* esquerdaNovo = nullptr, Node<T>* direitaNovo = nullptr){

			this->chave = chaveNova;
			this->p = pNovo;
			this->direita = direitaNovo;
			this->esquerda = esquerdaNovo;

		}
		
		Node<T>& operator=( const Node<T>& outroNoh){
			
			if( this == &outroNoh){ 
				return *this; 
			}

			this->chave = outroNoh.getChave();
			this->p = outroNoh.getP();
			this->esquerda = outroNoh.getEsquerda();
			this->direita = outroNoh.getDireita();
		
			return *this;
		}

		T getChave() const{ 
			return chave; 
		}

		void setChave(T chaveNova){ 
			this->chave = chaveNova; 
		}	

		Node<T>* getP() const{ 
			return p; 
		}
		
		void setP(Node<T>* pNovo){
			this->p = pNovo;
		}
	
		Node<T>* getEsquerda() const{ 
			return esquerda; 
		}

		void setEsquerda(Node<T>* esquerdaNovo){
			this->esquerda = esquerdaNovo;
		}
	
		Node<T>* getDireita() const{	
			return direita; 
		}

		void setDireita(Node<T>* direitaNovo){
			this->direita = direitaNovo;	
		}
	
};

#endif
