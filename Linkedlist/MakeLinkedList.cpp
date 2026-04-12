#include <bits/stdc++.h>
using namespace std;
//print linked list
class Node{
    public:
      int data;
      Node* next;

      Node(int data1 , Node* next1){
        data = data1;
        next = next1;
      }
      Node(int data1){
        data = data1;
        next=nullptr;
      }
};
Node* convertoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;

}

int main() {
    vector<int> arr = {2,3,4,5};
    Node* head = convertoLL(arr);
    Node* temp = head;
    while(temp){
      cout<<temp->data<<" ";
      temp = temp->next;
    }


    return 0;
}