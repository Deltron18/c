#include<iostream>
#include<vector>
using namespace std;
void printsumdiagonal(int arr[][3], int row, int col) {
    int firstsum = 0;
    int secondsum = 0;
    for (int i = 0; i < row; i++) {
        firstsum += arr[i][i]; // Sum of primary diagonal
    }
    int i=0, j=col-1;
    while(j>=0){
      secondsum+=arr[i][j]; // Sum of secondary diagonal
      i++,j--;
    }
    cout << "Sum of diagonal elements is: " << firstsum + secondsum << endl;
}
int main(){
  int matrix[3][3] = {
    {1, 2, 3 },
    {5, 5, 7 },
    {9, 10, 11}
  };
  printsumdiagonal(matrix, 3, 3);
}