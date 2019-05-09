#ifndef VECTOR_H
#define VECTOR_H 1

#include "person.h"

struct vector {
	//Podemos definir o tamanho inicial através de um construtor
	vector(int initial_quantity);
	~vector(); //destrutor

	int* values;     //Valores armazenados
	int quantity;    //Quantidade de elementos
	int array_size;  //Tamanho do vetor

	//Temos 6 operações/funções
	person 	at(int index);
	void	insert(int index, person p);
	int 	erase(int index);
	int 	size();
	bool 	empty();
	void 	sortByName();
	void 	sortByAge();
	int 	search(person p);
	void 	print(); //imprime o conteúdo da lista no formato <name> (<age> anos). Exemplo: João (29 anos)
};

#endif