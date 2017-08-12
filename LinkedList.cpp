#include <Arduino.h>
#include "LinkedList.h"

//Empty Linked List Initialization
void initLinkedList(linkedList &list){
  list.head = NULL;
  list.tail = NULL;
}

//Add node
node* addNode(int value)
{
  node *newNode;
  newNode = new node;
  if(newNode==NULL)
    return NULL;
  newNode->data=value;
  newNode->next=NULL;
  return newNode;
}

//Add a node to the last position in the linked list
int addLast(linkedList &list, int val){
  node *nodeAdd = addNode(val);
  if(nodeAdd==NULL) 
    return -1;
  if(list.head==NULL)
  {
    list.head = nodeAdd;
    list.tail = nodeAdd;
  }
  else 
  {
    list.tail->next=nodeAdd;
    list.tail=nodeAdd;
  }
    return 0;
}

//Add a node to the first position in the linked list
void addFirst(linkedList &list, node* nodeAdd){
  if(list.head==NULL)
  {
    list.head=nodeAdd;
    list.tail=nodeAdd;
  }
  else
  {
    nodeAdd->next=list.head;
    list.head=nodeAdd;
  }
}

//Add a new node after a node in the linked list
void addAfter(linkedList &, node, node);

//Show all nodes in the linked list
void listExplorer(linkedList list){
  int index=0;
  node *listPointer = list.head;
  while(listPointer!=NULL)
  {
    //Print format "Node[index] = data"
    Serial.print("Node["); Serial.print(index++); Serial.print("] = "); Serial.print(listPointer->data );
    Serial.println("");
    listPointer=listPointer->next;
  }
  //for(node* p=list.pFirst;p!=NULL;p=p->pNext)
    //cout << p->value << "  ";
}

//Find a node in the linked list
node* findNode(linkedList list, int toFind){
  node* sample = list.head;
  if(sample==NULL){
    return sample;
  }
  else{
    while((sample->data != toFind) &&(sample->next!=NULL)){
        sample=sample->next;  
      }
    }
    return sample;
  }

//Find node with large value in linked list
node* findMax(linkedList &list){
  node* sample = list.head;
  node* nodeMax = list.head;
  if(sample==NULL){
    return sample;
  }
  else{
      while(sample->next!=NULL){
        if(sample->data>nodeMax->data){
          nodeMax=sample;
          sample=sample->next;
         }
      }
  }
  return nodeMax;
}

