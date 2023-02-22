/* Using 3 pointers */

#include <iostream>
using namespace std;

int main() {
  int arr[] = {-1,11,1,2,1,-67,2,-81,11,-6,-1};
  int s = 0;
  int e = 10;
  int size = 11;
  int mid = 0;

  while(mid<=e)
    {
      if(arr[mid]>0)
      {
        swap(arr[mid],arr[e]);
        e--;
      }
      else if(arr[mid]<0)
      {
        swap(arr[mid],arr[s]);
        s = s+1;
        mid = mid+1;
      }
    }

  for(int i =0; i<size; i++)
    {
      cout<<arr[i]<<" ";
    }
}

/* Output:
-1 -1 -6 -81 -67 2 1 11 2 1 11   */
