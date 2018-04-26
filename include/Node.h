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
		/**<	Ponteiro que indica quem é o pai do nó atual */
		unique_ptr<T> pai;
		/**<	Ponteiro que indica quem é o filho da esquerda do nó atual */	
		unique_ptr<T> filhoEsquerda;
		/**<	Ponteiro que indica quem é o filho da direita do nó atual */
		unique_ptr<T> filhoDireita;

	/// MÉTODOS	
		
	public:
		
		/**
		 * @brief 	Construtor padrão
		*/	
		Node();
	
		/**
		 * @brief 	Construtor parametrizado
		 * @param 	chaveNova			
		 * @param 	paiNovo				 
		 * @param 	filhoEsquerdaNovo	
		 * @param 	filhoDireitaNovo			 
		*/	
		Node(T chaveNova, T* paiNovo, T* filhoEsquerdaNovo, T* filhoDireitaNovo);

		T getChave();
		void setChave(T chaveNova);	

		unique_ptr<T> getPai();
		void setPai(unique_ptr<T> paiNovo);
		
		unique_ptr<T> getFilhoDireita();
		void setFilhoDireita(unique_ptr<T> filhoDireitaNovo);
		
		unique_ptr<T> getFilhoEsquerda();
		void setFilhoEsquerda(unique_ptr<T> filhoEsquerdaNovo);
		

};

#endif
