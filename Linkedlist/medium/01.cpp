//find middle node in a linked list

#include <bits/stdc++.h>
using namespace std;
//insert at head --o(1)
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
//brute force
// int length(Node*head){
//     int cnt =0;
//     Node* temp = head;
//     while(temp!=nullptr){
//         cnt+=1;
//         temp = temp->next;
//     }
//     return cnt;

// }
// void mid(Node*head){
//     int count = length(head);
//     int cnt=0;
//     int mid = count/2;
//     Node* temp = head;
//     while(cnt<mid){
        
//         temp = temp->next;
//         cnt++;
//     }
//     cout<<temp->data;
    
// }

//optimal
void mid(Node*head){
    Node* fast = head;
    Node* slow = head;
    while(fast!=nullptr && fast->next!= nullptr){
        fast = fast->next->next;
        slow= slow->next;
    }
    cout<<slow->data<<" is mid";

}
int main(){
  Node* head = nullptr;
  int arr[] ={1,2,3,4,5,6};
  int n = 6;
  for(int i=n-1;i>=0;i--){
    head = insert(head, arr[i]);
  } 
  print(head);
  mid(head);
}
      
