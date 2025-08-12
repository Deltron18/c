#include<iostream>
#include<vector>
using namespace std;
void printreverserow(int arr[][4],int row,int col){
  for(int i=0;i<row;i++){
   int start=0,end=col-1;
    while(start<end){
        swap(arr[i][start],arr[i][end]);
        start++;
        end--;
      }
  }
  cout<<"Resultant matrix after reversing each row is: "<<endl;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int arr1[3][4]={1,2,3,4,5,6,7,8,9,0,11,22};
  printreverserow(arr1,3,4);
}