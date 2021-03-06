#include <iostream>
using namespace std;

const int N=3;

void spiralMatrixPrint(int size, int arr[][N], int item)  {
  
  
  int top =0, bottom =size, left = 0, right =size ;
 //int top = 1, bottom =size , left = 1, right = size ;
  
  // Defining the direction in which the array is to be traversed.
  int dir = 1;
 
  while (top <= bottom && left <= right) {

    if (dir == 1) {    // moving left->right
      
      for (int i = left; i <= right; ++i){
      
         if(arr[top][i]==item)
          {cout<<"Element found in ["<<top+1<<"]["<<i+1<<"] th position of the matrix\n";
          }
      }
      // Since we have traversed the whole first
      // row, move down to the next row.
      ++top;
      dir++;
    } 
    else if (dir == 2) {     // moving top->bottom
      for (int i = top; i <= bottom;++i) {
         
          if(arr[i][right]==item)
          {cout<<"Element found in ["<<i+1<<"]["<<right+1<<"] th position of the matrix\n";
          }
      }
      // Since we have traversed the whole last
      // column, move left to the previous column.
      --right;
      dir++;
    } 
    else if (dir == 3) {     // moving right->left
      for (int i = right; i >= left; --i) {
         
         if(arr[bottom][i]==item)
          {cout<<"Element found in ["<<bottom+1<<"]["<<i+1<<"] th position of the matrix\n";
          }
      }
      // Since we have traversed the whole last
      // row, move up to the previous row.
      --bottom;
      dir++;
    } 
    else if (dir == 4) {     // moving bottom->up
      for (int i = bottom; i >= top; --i) {
          
           if(arr[i][left]==item)
          {cout<<"Element found in ["<<i+1<<"]["<<left+1<<"] th position of the matrix\n";
          }
      }
      // Since we have traversed the whole first
      // col, move right to the next column.
      ++left;
      dir =1;
    }
  }
}
int main() {
    int item;
  // Driver code
  int mat[N][N];
  cout<<"Enter the matrix elements:\n";
  for(int i=0;i<N;i++)
   for(int j=0;j<N;j++)
    cin>>mat[i][j];
 cout<<"The given matrix is:\n";
 for(int i=0;i<N;i++)
   {for(int j=0;j<N;j++)
    {cout<<mat[i][j]<<" ";
    }
    cout<<endl;
   }
  
  cout<<"Enter item to be found\n";
  cin>>item;
  spiralMatrixPrint(N,mat,item); 
  return 0; 
}
