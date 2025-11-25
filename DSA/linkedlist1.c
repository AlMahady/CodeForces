#include <stdio.h>
#include <stdlib.h>
//let's create a simple linked list

//node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

//this was the structure of the box
//typedef is a keyword used to make alias or newname or existing new data


Node* createNode(int Value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    //this is a function to create two box in memory one for the value and one for the address
    //the second box is by default null , you have to push the next address manually
    //malloc for memory allocation

    if(!newNode){
        printf("Memory allocation failed");
        exit(1);
        //if computer cannot give memory the programme stops
    }

    //then we put data in the boxes
    // -> this is pointer sign or arrow operator or structure pointer operator
    newNode->data = Value;
    newNode->next = NULL;//by default every address is null
    return newNode;
}

//function to print all nodes
void printList(Node* node){
    while (node)
    {
        printf("%d -> ",node->data);
        node = node -> next;
    }
    printf("null\n");
}

int main () {
    Node* node1 = createNode(1);
    Node* node2 = createNode(12);
    Node* node3 = createNode(2);
    Node* node4 = createNode(55);

    //upper block makes seperate boxes of node

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    // here we made the function

    printList(node1);


    free(node1);
    free(node1);
    free(node1);
    free(node1);


}