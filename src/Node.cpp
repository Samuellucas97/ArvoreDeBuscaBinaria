/**
 * @file 		Node.cpp 
 * @brief		Contém a implementação dos métodos da classe Node
 * @author 		Samuel Lucas de Moura Ferino
 * @since 		26.04.2018
 * @version 	0.0.1
*/ 

#include "Node.h"
		
/**
 * @brief 	Construtor parametrizado
 * @param 	chaveNova				 
 * @param 	filhoEsquerdaNovo	
 * @param 	filhoDireitaNovo			 
*/	
Node::Node(T chaveNova, T* esquerdaNovo = nullptr, T* direitaNovo = nullptr)
{
	chave = chaveNova;
	direita = make_unique<T>(DireitaNovo);
	esquerda = make_unique<T>(EsquerdaNovo);
	
}


T 
Node::getChave(){	return chave; }

void 
Node::setChave(T chaveNova){ chave = chaveNova; }	


unique_ptr<T> 
Node::getDireita(){	return Direita; }

void 
Node::setDireita(unique_ptr<T> direitaNovo){}
	
unique_ptr<T> 
Node::getEsquerda(){	return Esquerda; }

void setDireita(unique_ptr<T> direitaNovo);
	