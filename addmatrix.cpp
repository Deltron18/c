#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr1[3][4]={1,2,3,4,5,6,7,8,9,0,10,11};
  int arr2[3][4]={13,14,15,16,17,18,19,20,21,22,23,24};
  int ans[3][4];

for(int row=0;row<3;row++){
  for(int col=0;col<4;col++){
    ans[row][col]=arr1[row][col]+arr2[row][col];
  }
}
  cout<<"Resultant matrix after addition is: "<<endl;
  for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
      cout<<ans[row][col]<<" ";
    }
    cout<<endl;
  }
  return 0;
}