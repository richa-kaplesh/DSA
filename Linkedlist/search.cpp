//search element ---O(n)
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

bool search(Node* head , int target){
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->data == target){
            return true;
        }
        temp=temp->next;
    }
    return false;
}



int main(){
    int arr[]={1,2,3,4,5};
    int n =5;
    Node* head = nullptr;
    for(int i=n-1;i>=0;i--){
        head = insertathead(head, arr[i]);

    }
    print(head);
    int target = 2;
    if(search(head,target)){
        cout<<"Target found";
    } else{
        cout<<"target not found";
    }
}