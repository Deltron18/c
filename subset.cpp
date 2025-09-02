#include<iostream>
using namespace std;

void print(int arr[], int index, int n, int sum){
  if(index>=n){
    cout<<sum<<endl;
    return;
  }
  //include
  print(arr,index+1,n,sum+arr[index]);
  //exclude
  print(arr,index+1,n,sum);
}

int main(){
  int arr[5] = {1, 2, 3, 4, 5};
  print(arr,0,5,0);
}
