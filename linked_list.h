#ifndef LINKED_LIST
#define LINKED_LIST

struct Node {
    Node();
    float info;
    Node* next; //Ponteiro para o próximo elemento
};

struct LinkedList {
    LinkedList();
    ~LinkedList();

    Node* head;                     //Aponta para o primeiro elemento
    Node* insert_front(float info); //Insere um elemento na primeira posição
    Node* insert_back(float info);  //Insere um elemento na última posição
    bool is_empty();                //Diz se a lista está vazia ou não
    int length();                   //Diz o tamanho da lista
    Node* search(float value);      //Procura um valor na lista
    void remove(float value);       //Remove este valor da lista
    void print();                   //Imprime a lista
};


#endif