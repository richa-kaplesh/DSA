#include <bits/stdc++.h>
using namespace std;
//insert at tail ---o(n)
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
        next=nullptr;
     }
};

void InsertAttail(Node* head , int newdata){
    Node*temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next= new Node(newdata);
}
Node* InsertAtHead(Node*head,int newdata){
    return new Node(newdata , head);
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
    int arr1[]={1,2,3,4,5};
    int n1= 5;
    int arr2[] ={6,7,8,9,10};
    int n2 = 5;
    Node* head = nullptr;
    for(int i=n1-1;i>=0;i--){
        head = InsertAtHead(head, arr1[i]);
    }
    for(int i=0;i<n2;i++){
        InsertAttail(head , arr2[i]);
    }
    print(head);
}