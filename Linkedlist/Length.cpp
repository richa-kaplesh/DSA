//length of ll --O(n)
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
int count(Node* head){
    int cnt =0;
    Node*temp = head;
    while(temp!=nullptr){
        cnt+=1;
        temp=temp->next;
    }
    return cnt;
}



int main(){
    int arr[]={1,2,3,4,5};
    int n =5;
    Node* head = nullptr;
    for(int i=n-1;i>=0;i--){
        head = insertathead(head, arr[i]);

    }
    cout<<"length is -> "<<count(head);
   

}