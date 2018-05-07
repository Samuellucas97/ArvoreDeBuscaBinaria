# Binary Search Tree

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/62b6241e54594fce96fda08bb64e8c7d)](https://www.codacy.com/app/Samuellucas97/BinarySearchTree?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Samuellucas97/BinarySearchTree&amp;utm_campaign=Badge_Grade)	 
![License MIT](https://img.shields.io/npm/l/express.svg)
![TeamCity (simple build status)](https://img.shields.io/teamcity/http/teamcity.jetbrains.com/s/bt345.svg)
[![Docs](https://img.shields.io/readthedocs/pip.svg)](http://cesiumjs.org/tutorials.html)
	  

Neste repositório é implementado o container denominado __Árvore de Busca Binária__ referente à atividade da 2ª unidade da disciplina de
_Estrutura de Dados II_ do bacharelado em Tecnologia da Informação (__UFRN__). 


## O que é uma Árvore de busca binária?

Em Ciência da computação, uma **árvore binária de busca** (ou ***árvore binária de pesquisa***) é uma estrutura de dados de árvore binária baseada em nós, onde todos os nós da subárvore esquerda possuem um valor numérico inferior ao nó raiz e todos os nós da subárvore direita possuem um valor superior ao nó raiz (esta é a forma padrão, podendo as subárvores serem invertidas, dependendo da aplicação).


<p align="center">
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/d/da/Binary_search_tree.svg/200px-Binary_search_tree.svg.png" width="50%"  />
</p>

O objetivo desta árvore é estruturar os dados de forma a permitir busca binária. [Wikipedia]  


| Algoritmo 	| 	Caso médio	|	Pior caso 	|
| :--			|	---			|			--:	|
| Busca			|	O(lg n)		|	 O(n)		|
| Inserção		|	O(lg n)		|	 O(n)		|
| Remoção		|	O(lg n)		|	 O(n)		|


[Wikipedia]: https://pt.wikipedia.org/wiki/%C3%81rvore_bin%C3%A1ria_de_busca

## Requisitos mínimos

Compilador C++ 11 (**g++**), GNU debugger (**GDB**) e Doxygen.
	
	Obs.: Para usuários Linux, tanto o g++ quanto o gdb são ambos nativo, faltando apenas instalar o Doxygen.  
	Porém, caso deseje usar o gdb no Windows será necessário instalar o MinGW. 

### :package: Download Doxygen ## 
  
Visite a página de [Download] ou instale diretamente no terminal usando o seguinte código caso seja usuário ***Ubuntu***:  

```$ sudo apt-get install doxygen``` 	

[Download]:http://www.stack.nl/~dimitri/doxygen/download.html

## Etapa de compilação e execução

	Obs.: Todos os códigos digitados no terminal deverão ser na respectiva pasta raiz do programa.  
	Exceto na vizualização da documentação do projeto, não será necessário alterar a pasta.

Depois de clonar o repositório na respectiva pasta local, digite ```make``` para 
realizar a compilação, resultando na criação do arquivo binário(executável) 
denominado ***binarysearchtree***. Em seguida, digite ```./binarysearchtree``` para executar o programa.

###  Documentação e exclusão dos objetos e do executável

Caso deseje verificar a documentação, digite ```make doxy```. Diante disso, abra a pasta **html**, depois abra o arquivo chamado **index.html** o qual possui a documentação.  

Além disso, caso deseje fazer o debugger do programa, primeiro digite no terminal ```make debug```, depois digite ```gdb ./binarysearchtree```.  Ou, se quiser apagar os objetos e o executável, digite ```make clean```.

## Autor

Samuel Lucas de Moura Ferino (_samuel1797@gmail.com_)


