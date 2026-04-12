//delete last node from tail of ll
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node* next;

      Node(int data1,Node* next1){
        data = data1;
        next = next1;
      }
      Node(int data1){
        data = data1;
        next = nullptr;
      }
};
Node* insertathead(Node* head , int newdata){
    return new Node(newdata, head);
}
void print(Node* head){
    Node*temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}

Node* deletenodefromtail(Node* head){

    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n =5;
    Node* head = nullptr;
    for(int i=n-1;i>=0;i--){
        head = insertathead(head, arr[i]);

    }
    print(head);
    cout<<"after deleting"<<endl;
    head =deletenodefromtail(head);
    print(head);
}