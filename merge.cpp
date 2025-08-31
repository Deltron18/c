#include<iostream>
using namespace std;
#include<vector>


void merge(int arr[], int start, int mid, int end){
  int i=start;
  int j=mid+1;
  int k=0;
  vector<int> temp(end-start+1);
  while(i<=mid && j<=end){
    if(arr[i]<arr[j]){
      temp[k++]=arr[i++];
    }
    else{
      temp[k++]=arr[j++];
    }
  }
  while(i<=mid){
    temp[k++]=arr[i++];
  }
  while(j<=end){
    temp[k++]=arr[j++];
  }
  k=0;
  for(int i=start;i<=end;i++){
    arr[i]=temp[k++];
  }
}


void mergesort(int arr[], int start,int end){
     if(start>=end)
         return;

  int mid=start+(end-start)/2;
  mergesort(arr,start,mid);
  mergesort(arr,mid+1,end);
  merge(arr,start,mid,end);
}
int main(){
  int arr[]={38,27,43,3,9,82,10,15,29,50};
  mergesort(arr,0,9);
  for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
  }
}