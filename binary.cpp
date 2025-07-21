#include<iostream>
using namespace std;
int main(){
  int arr[1000];
  int n;
  cout << "Enter the number of elements: ";
  cin>>n;
  cout << "Enter the elements: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int key;
  cout << "Enter the element to search for: ";
  cin>>key;

  // Binary Search
  int low = 0;
  int high = n - 1;
  bool found = false;
  while(low <= high){
    int mid = (low + high) / 2;
    if(arr[mid] == key){
      found = true;
      break;
    }
    else if(arr[mid] < key){
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }

  if(found){
    cout << "Element found at index " << (low + high) / 2 << endl;
  }
  else{
    cout << "Element not found" << endl;
  }

}