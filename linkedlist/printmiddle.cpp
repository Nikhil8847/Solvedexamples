#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node* next;
};
Node* head = NULL;
void printMiddle(){
  Node* a = head; // a is the faster person
  Node* b = head; // b is the slower one
  if(head!= NULL)
  {
    while (a != NULL && a-> next != NULL ) {
      a = a -> next -> next;
      b = b-> next;
    }
    std::cout << "the middle of the list is: " <<b -> data<< '\n';
  }
}
void Insert(int data) // here data is local and is the data of the node we are entering
{
  Node* temp = new Node(); // if you are using c then use malloc operater
  temp -> data = data; // assinging data portion to the data of temp
  temp -> next = head;
  head  = temp;
}
int main(){
  Insert(5);
  Insert(2);
  Insert(4);
  printMiddle();
}
