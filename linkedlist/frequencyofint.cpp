#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node* next;
};
Node* head = NULL;
void Insert(int data) // here data is local and is the data of the node we are entering
{
  Node* temp = new Node(); // if you are using c then use malloc operater
  temp -> data = data; // assinging data portion to the data of temp
  temp -> next = head;
  head  = temp;
}
int occurence(int integer)
{
  Node* temp = head; // as I don't want to change the value of head itself
  int count = 0;
  while( temp != NULL){
    if(temp -> data == integer)
       count++;
    temp = temp -> next;
  }
  return count;
}
int main(){
  Insert(5);
  Insert(2);
  Insert(4);
  Insert(2);
  Insert(2);
  cout<<occurence(2) << " ";
}
