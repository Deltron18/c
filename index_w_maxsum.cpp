#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void printrowmax(int arr[][4],int row,int col){
  int index=-1,sum=INT_MIN;
  for(int i=0;i<row;i++){
    int row_sum=0;
    for(int j=0;j<col;j++){
      row_sum+=arr[i][j];
    }
    if(row_sum>sum){
      sum=row_sum;
      index=i;
    }
  }
  cout<<"Row with maximum sum is: "<<index<<endl;
}
int main(){
  int arr1[3][4]={100,31,32,33,34,35,36,37,38,39,40,41};
  printrowmax(arr1,3,4);
}