#include "Nodes.h"

struct node {
    int id;
    int coordenadaX;
    int coordenadaY;
}

Node* criaNode(int idNode, int x, int y){
    Node* no = malloc(sizeof(Node*));
    no->id = idNode;
    no->coordenadaX = x;
    no->coordenadaY =y;
    
    return no;
}