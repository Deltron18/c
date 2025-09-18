#include<iostream>
#include<queue>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int value){
    data=value;
    left=NULL;
    right=NULL;
  }
};

int main(){
  int x;
  int first,second;
  queue<Node*> q;
  cout<<"Enter root value: ";
  cin>>x;
  Node* root=new Node(x);
  q.push(root);
  while(!q.empty()){
    Node* curr=q.front();
    q.pop();
    cout<<"Enter left child of "<<curr->data<<": ";
    cin>>x;
    if(x!=-1){
      curr->left=new Node(x);
      q.push(curr->left);
    }
    cout<<"Enter right child of "<<curr->data<<": ";
    cin>>x;
    if(x!=-1){
      curr->right=new Node(x);
      q.push(curr->right);
    }
  }
}