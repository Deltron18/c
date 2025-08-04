#include<iostream>
#include<vector>
using namespace std;

bool divide(vector<int>arr){
  int totalsum=0,n=arr.size(),prefix=0;
  for(int i=0;i<n;i++){
    totalsum+=arr[i];
  }
  for(int i=0;i<n;i++){
    prefix+=arr[i];
    if(prefix==totalsum-prefix){
      return true;
    }
  }
  return false;
  }

int main(){
  int n;
  cout<<"enter size of vector: ";
  cin>>n;
  vector<int> v(n);
  cout<<"enter elements of vector: ";
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }
  cout<<divide(v);


}