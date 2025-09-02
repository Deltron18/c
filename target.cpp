#include<iostream>
using namespace std;

bool check(int arr[],int i,int n,int target){

  if(i>=n || target<0) return false;
  if(target==0) return true;

return check(arr,i+1,n,target-arr[i]) || check(arr,i+1,n,target);

}

int main(){
  int arr[5]={1,2,3,4,5};
  int target=9;
  cout<<check(arr,0,5,9);
}