#include <iostream>
#include <string>

#include "vector.h"
#include "person.h"

vector::vector(int initial_quantity) : //essa é a forma correta de iniciar, fazer o mesmo nas demais structs
	values(new person [initial_quantity]),
	array_size(initial_quantity),
	quantity(0)
{}

vector::~vector() {
	delete[] values;
}

person vector::at(int index) {
	return values[index];
}

void vector::insert(int index, person p) {
	if(index >= 0 && index < array_size){ //verificando se ainda tem posições disponíveis e se o índice é valido
		quantity++;
		person* aux;
		aux = new person [quantity];

		for(int i = 0; i < index; i++){
			aux[i] = values[i];
		}

		aux[index] = p;

		for(int i = (index+1); i < quantity; i++){
			aux[i] = values[i];
		}

		delete[] values;
		values = aux;
	} else {
		std::cout << "Indice invalido" << std::endl;
	}
}

int vector::erase(int index) {
	if(index <= array_size){
		for(int i = index; i < array_size; i++){
			values[i] = values[i+1];
		}

		quantity -= 1;
	} else{
		std::cout << "Indice invalido" << std::endl;
	}
	return 0;
}

int vector::size() {
	return quantity;
}

bool vector::empty() {
	return quantity == 0;
}

void vector::sortByName(vector v){
	//Utilizei o insertion sort para comparar as strings
	person x; 
	int j;
	for(int i = 2; i <= quantity; i++){
		x = v[i];
		j = i - 1;
		v[0] = x;
		while(x.return_name() < v[j].return_name()){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = x;
	}
}

void vector::sortByAge(vector v){
	//Utilizei o insertion sort para comparar as idades
	person x; 
	int j;
	for(int i = 2; i <= quantity; i++){
		x = v[i];
		j = i - 1;
		v[0] = x;
		while(x.return_age() < v[j].return_age()){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = x;
	}
}

int search(person p){
	//Aqui é preciso criar um mecanismo de busca que consiga buscar pelo nome e idade ao mesmo tempo

}

void print(vector v){
	for(int i = 0; i < quantity; ++i){
		v[i].printPerson();
	}
}