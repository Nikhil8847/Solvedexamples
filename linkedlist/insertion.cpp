//Insertion in linked list
/*
1. At beginning
2. After nth Node
3. At the end of the linked List*/
#include<bits/stdc++.h>
using namespace std;
// first we have to specify the class or structure
class Node{
public: 
  int data;// data in the Node
  Node* next; // pointer to the node
};
// first pushing node at front
// I am defining head as a global variable
Node* head = NULL;
int count;
void push(int data) // here data is local and is the data of the node we are entering
{
  Node* temp = new Node(); // if you are using c then use malloc operater
  temp -> data = data; // assinging data portion to the data of temp
  temp -> next = head;
  head  = temp;
}
// 2. to push After
void addafter(int data, Node* prev) // we have to know the previous node after which we want to enter it
{
  if(prev == NULL)
  {
    cout<< "previous Node can't be NULL"<< endl;
    return; // i.e. if case is satisfied simply return from the loop
  }
  Node* temp = new Node();
  temp -> data = data;
  temp -> next = prev-> next; // now the node we inserted is replacing the bound between previous and the next one
  prev-> next = temp; // previous node will have connection with our newly linked Node
}
// 3. 
void atlast(int data)
{
  Node* temp = new Node();
  Node* last = head; // I am defining it to use in the later part because i don't want to make any disturbance to genuine value of 
  // head
  temp -> data = data;
  temp -> next = NULL; // as we know the last node will have pointer to NULL, i.e. No node after the last
  if( head == NULL)
  {
    head = temp;
    return; // i.e. if linked is empty head is itself the node we inserted
    
  }
  while (last -> next != NULL) { // for going through every node of the list until we reach last one
    last = last -> next;
  }
  last -> next  = temp; // simply the last node is now the temp;
  return;
}
// sorry I forgot to apply the print 
// 4. 
void print(){
  Node* temp = head;
  while(temp != NULL)
  {
    std::cout << temp -> data << '\n';
    temp = temp -> temp;
  }
}
int sizeof()
{
  Node* temp = head;
  if(temp != NULL)
  {
    count++;
    temp = temp -> temp;
  }
  return count;
}
int getNth(int n) // here n is the position of the Node
{
  Node* temp = head;
  if(n == 1)
  {
    return head;
  }
  while(temp-> next != NULL)
}
void printMiddle(){
  Node* temp = head;
  Node* p = head;
  Node* q = head;
  if (head != NULL){
    while (p != NULL && p -> next != NULL) {
      p = p->next -> next;
      q = q -> next;
    }
    std::cout << "The middle of the list is: "<< q->data << '\n';
  }
}
int main()  
{  
    /* Start with the empty list */
    struct Node* head = NULL;  
    int i;  
  
    for (i=5; i>0; i--)  
    {  
        push(&head, i);  
        printList(head);  
        printMiddle(head);  
    }  
  
    return 0;  
}  
