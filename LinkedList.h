struct node{
  int data;
  node *next;  
};

struct linkedList{
  node *head;
  node *tail;
};
//Empty Linked List Initialization
void initLinkedList(linkedList &);

//Add node
node* addNode(int);

//Add a node to the last position in the linked list
int addLast(linkedList &, int);

//Add a node to the first position in the linked list
void addFirst(linkedList &, node*);

//Add a new node after a node in the linked list
void addAfter(linkedList &, node*, node);

//Show all nodes in linked list
void listExplorer(linkedList);

//Find a node in linked list
node* findNode(linkedList, int);

//Find node with large value in linked list
node* findMax(linkedList &);
