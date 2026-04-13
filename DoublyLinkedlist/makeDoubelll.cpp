#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node*prev;
      Node* next;

      Node(int data1, Node* next1, Node*  prev1){
        data = data1;
        next = next1;
        prev = prev1;

      }
      Node(int data1){
        data = data1;
        next=nullptr;
        prev=nullptr;
      }
};

Node* insertattail(Node* head , int newdata){
    if(head == nullptr){
        return new Node(newdata);
    }
    Node*temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;

    }
    Node* newNode = new Node(newdata);
    temp->next = newNode;
    newNode->prev = temp;

    return head;
}
void print(Node*head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

int main(){
    int arr[]= {1,2,3,5};
    int n =4;
    Node*head = nullptr;
    for(int i=n-1;i>=0;i--){
        head = insertattail(head , arr[i]);
    }
    print(head);
}