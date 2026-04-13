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

Node* insertathead(Node*head , int newdata){
    if(head== nullptr){
        return new Node(newdata);
    }
    Node* newNode = new Node(newdata);
    newNode->next = head;
    newNode->prev = nullptr;
    if(head!=nullptr){
        head->prev = newNode;

    }
    head = newNode;
    return head;


}
Node* deletehead(Node* head){
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node* temp = head->next;
    temp->prev = nullptr;
    delete head;
    head = temp;
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
        head = insertathead(head , arr[i]);
    }
    cout<<"before"<<endl;
    print(head);
    cout<<"after"<<endl;
    head = deletehead(head);
    print(head);
}