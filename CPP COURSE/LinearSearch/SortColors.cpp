#include <iostream>
using namespace std;

int main() {
  int arr[] = {0,1,1,2,1,0,2,0,2,1,0};
  int s = 0;
  int e = 10;
  int size = 11;
  int mid = 0;

  while(mid<=e)
    {
      if(arr[mid]==0)
      {
        swap(arr[mid],arr[s]);
        s = s+1;
        mid = mid+1;
      }
      else if(arr[mid]==2)
      {
        swap(arr[mid],arr[e]);
        e=e-1;
      }
      else 
      {
        mid++;
      }
    }

  for(int i =0; i<size; i++)
    {
      cout<<arr[i]<<" ";
    }
}



/*Output
0 0 0 0 1 1 1 1 2 2 2
