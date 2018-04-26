/**
 * @file 		Node.h 
 * @brief		Contém a classe Node com os escopos dos métodos
 * @author 		Samuel Lucas de Moura Ferino
 * @since 		26.04.2018
 * @version 	0.0.1
*/ 

#ifndef _NODE_H
#define _NODE_H

#include <memory>		/// unique_ptr

/**
 * @class		Node
 */
template<typename T>
class Node{

	///	ATRIBUTOS

	private:
		
		/**<	Chave/conteúdo do nó */
		T chave;
		/**<	Ponteiro que indica quem é o filho da esquerda do nó atual */	
		unique_ptr<T> esquerda;
		/**<	Ponteiro que indica quem é o filho da direita do nó atual */
		unique_ptr<T> direita;

	/// MÉTODOS	
		
	public:
		
		/**
		 * @brief 	Construtor padrão
		*/	
		Node();
		
		/**
		 * @brief 	Destrutor padrão
		*/	
		~Node();
		
		Node(T chaveNova, T* esquerdaNovo = nullptr, T* direitaNovo = nullptr);

		T getChave();
		void setChave(T chaveNova);	

		unique_ptr<T> getDireita();
		void setDireita(unique_ptr<T> direitaNovo);
		
		unique_ptr<T> getFilhoEsquerda();
		void setEsquerda(unique_ptr<T> esquerdaNovo);
		
};

#endif
