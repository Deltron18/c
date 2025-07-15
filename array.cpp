#include <iostream>
#include <climits>
using namespace std;
int main(){
  int arr[5]={6, 2, 3, 32, 5};
  // cout<<sizeof(arr)/sizeof(arr[0])<<endl; size of array



  // int ans= INT_MAX;  minimum element
  // for(int i=0;i<5;i++)
  // {
  //   if(arr[i]<ans)
  //   {
  //     ans=arr[i];
  //   }
  // }
  // cout<<ans<<endl;



  int ans = INT_MIN;   // maximum element
  for(int i=0;i<5;i++)
  {
    if(arr[i]>ans)
    {
      ans=arr[i];
    }
  }
  cout<<ans<<endl;

  return 0;

}