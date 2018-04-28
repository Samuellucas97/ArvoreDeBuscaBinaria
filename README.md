# Binary Search Tree

Neste repositório é implementado o container denominado __Árvore de Busca Binária__ referente à atividade da 2ª unidade da disciplina de
_Estrutura de Dados II_ do bacharelado de Tecnologia da Informação (__UFRN__). 


## O que é Árvore de busca binária?

Em Ciência da computação, uma **árvore binária de busca** (ou ***árvore binária de pesquisa***) é uma estrutura de dados de árvore binária baseada em nós, onde todos os nós da subárvore esquerda possuem um valor numérico inferior ao nó raiz e todos os nós da subárvore direita possuem um valor superior ao nó raiz (esta é a forma padrão, podendo as subárvores serem invertidas, dependendo da aplicação).

O objetivo desta árvore é estruturar os dados de forma a permitir busca binária. [Wikipedia]  


| Algoritmo 	| 	Caso médio	|	Pior caso 	|
| :--			|	---			|			--:	|
| Busca			|	O(lg n)		|	 O(n)		|
| Inserção		|	O(lg n)		|	 O(n)		|
| Remoção		|	O(lg n)		|	 O(n)		|


[Wikipedia]: https://pt.wikipedia.org/wiki/%C3%81rvore_bin%C3%A1ria_de_busca

## Requisitos mínimos

Compilador C++11 (**g++**), GNU debugger(**GDB**) e Doxygen
	
	Obs.: Caso o usuário utilize o sistem operacional Linux, não há necessidade de instalar nem o g++ nem o gdb pois ambos são nativo do Linux, faltando instalar apenas o Doxygen. Porém, caso deseje usar o gdb no windows será necessário instalar o MinGW. 

Download Doxygen(UBUNTU):

```$ sudo apt-get install doxygen``` 	

## Etapa de compilação e execução

	Obs: Todos os códigos digitados no terminal deverão ser na respectiva pasta raiz do programa.  
	Exceto na vizualização da documentação do projeto, não será necessária alterar a pasta.

Depois de clonar o repositório na respectiva pasta local, digite ```make``` para 
realizar a compilação, resultando na criação do arquivo binário(executável) 
denominado ***binarysearchtree***. Em seguida, digite ```./binarysearchtree``` para executar o programa.

###  Documentação e exclusão dos objetos e do executável

Caso deseje verificar a documentação, digite ```make doxy```. Diante disso, abra a pasta **html**, depois abra o arquivo chamado **index.html** o qual possui a documentação.  

Além disso, caso deseje fazer o debugger do programa, primeiro digite no terminal ```make debug```, depois digite ```gdb ./binarytree```.  Ou, se quiser apagar os objetos e o executável, digite ```make clean```.

## Autor

Samuel Lucas de Moura Ferino (_samuel1797@gmail.com_)


