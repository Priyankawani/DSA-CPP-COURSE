#include <iostream>
using namespace std;

int main() {
  int arr[] = {-1,11,1,2,1,-67,2,-81,11,-6,-1};
  int s = 0;
  int e = 10;
  int size = 11;
  int mid = 0;

  while(s<e)
    {
      if(arr[s]>0)
      {
        swap(arr[s],arr[e]);
        e--;
      }
      else
      {
        s++;
      }
    }

  for(int i =0; i<size; i++)
    {
      cout<<arr[i]<<" ";
    }
2
  
  /* Output:
  -1 -1 -6 -81 -67 2 1 11 2 1 11  */
