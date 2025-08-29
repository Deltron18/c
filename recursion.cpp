#include<iostream>
using namespace std;

void funhappy(int n){
  if(n==0){
    cout<<"Happy birthday"; //base case
    return;
  }
  cout<<n <<" days left for bday"<<endl;
  funhappy(n-1);
}

int main(){
  int n=5;
  funhappy(n);
}