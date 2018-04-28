/**
 * @file 		node.h 
 * @brief		Contém a classe Node a implementação de seus métodos
 * @author 		Samuel Lucas de Moura Ferino
 * @since 		26.04.2018
 * @version 	0.0.7
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
		/**<	Ponteiro que indica quem é o nó filho à esquerda do nó atual */	
		Node<T>* esquerda;
		/**<	Ponteiro que indica quem é o nó filho à direita do nó atual */
		Node<T>* direita;

	/// MÉTODOS	
		
	public:

		/**
		 * @brief	Construtor padrão e parametrizado ao mesmo tempo
		 * @param 	chaveNova 		Conteúdo da chave do novo nó
		 * @param 	pNovo			Ponteiro para o pai do novo nó
		 * @param 	esquerdaNovo 	Ponteiro para o nó filho à esquerda do novo nó 
		 * @param 	direitaNovo 	Ponteiro para o nó filho à direita do novo nó 
		 */	
		Node(const T chaveNova = T(), Node<T>* pNovo = nullptr, 
			Node<T>* esquerdaNovo = nullptr, Node<T>* direitaNovo = nullptr){

			this->chave = chaveNova;
			this->p = pNovo;
			this->direita = direitaNovo;
			this->esquerda = esquerdaNovo;

		}
		
		/**
		 * @brief	Sobrecarga do operador =
		 *			Pode atuar como um dos construtores
		 * @param 	outroNoh 		Nó usado como referência 	
		 */
		Node<T>& operator=( Node<T>& outroNoh){
			
			this->chave = outroNoh.getChave();
			this->p = outroNoh.getP();
			this->esquerda = outroNoh.getEsquerda();
			this->direita = outroNoh.getDireita();
		
			return *this;
		}


		/**
		 * @brief	Destrutor padrão 
		 */	
		~Node(){	/** Vazio */	}

		/**
		 * @brief 		Método get do atributo chave
		 * @return 		Chave do nó
		*/
		T getChave() const{ 
			return chave; 
		}

		/**
		 * @brief 		Método get do atributo chave
		 * @return 		chaveNova		Chave do nó
		*/
		void setChave(T chaveNova){ 
			this->chave = chaveNova; 
		}	


		/**
		 * @brief 		Método get do atributo p
		 * @return 		Ponteiro para o nó pai do nó atual
		*/
		Node<T>* getP() const{ 
			return p; 
		}
		
		/**
		 * @brief 		Método get do atributo p
		 * @return 		pNovo		Ponteiro para o nó pai do nó atual
		*/
		void setP(Node<T>* pNovo){
			this->p = pNovo;
		}
	
		/**
		 * @brief 		Método get do atributo esquerda
		 * @return 		Ponteiro para o nó filho à esquerda do nó atual
		*/
		Node<T>* getEsquerda() const{ 
			return esquerda; 
		}

		/**
		 * @brief 		Método get do atributo esquerda
		 * @return 		esquerdaNovo		Ponteiro para o nó filho à esquerda do nó atual
		*/
		void setEsquerda(Node<T>* esquerdaNovo){
			this->esquerda = esquerdaNovo;
		}
	
		/**
		 * @brief 		Método get do atributo direita
		 * @return 		Ponteiro para o nó filho à direita do nó atual
		*/
		Node<T>* getDireita() const{	
			return direita; 
		}

		/**
		 * @brief 		Método get do atributo direita
		 * @return 		direitaNovo		Ponteiro para o nó filho à direita do nó atual
		*/
		void setDireita(Node<T>* direitaNovo){
			this->direita = direitaNovo;	
		}
	
};

#endif
