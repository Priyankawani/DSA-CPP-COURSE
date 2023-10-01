#include <iostream>
using namespace std;

int main() {
  int arr[3][3];
  int rows = 3;
  int cols = 3;
  
  for(int i=0;i<rows;i++)
    {
      for(int j=0;j<cols;j++)
        {
          cin>>arr[i][j];
          cout<<" ";
        }
      cout<<endl;
    }
  int sum = 0;
  for(int i=0;i<rows;i++)
    {
      for(int j=0; j<cols; j++)
        {
          sum = sum + arr[j][i];
        }
      cout<<sum<<" ";
      sum = 0;
    }
}




