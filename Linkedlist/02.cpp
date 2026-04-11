#include <bits/stdc++.h>
using namespace std;
//insert at head
class Node{
  public:
    int data;
    Node* next;
    
  Node(int data1, Node* next1){
    data = data1;
    next = next1;
  }
  
  Node(int data1){
    data = data1;
    next = nullptr;
  }
};

Node* insert(Node*head,int newdata){
  return new Node(newdata,head);
}
void print(Node* head){
  Node* temp = head;
  while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp=temp->next;

  }
  cout<<"null"<<endl;
}

int main(){
  Node* head = nullptr;
  int arr[] ={1,2,3,4,5,6};
  int n = 6;
  for(int i=n-1;i>=0;i--){
    head = insert(head, arr[i]);
  } 
  print(head);
}
      
