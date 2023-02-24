#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr{10,1,7,6,14,9};
  int n = arr.size();

  //Bubble sort
  for(int round=0; round<n-1; round++)
    {
      for(int j=0;j< n-round-1; j++)
        {
          if(arr[j]>arr[j+1])
          {
            swap(arr[j],arr[j+1]);
          }
        }
    }
  //print
  for(int i=0; i<n; i++)
    {
      cout<<arr[i]<<" ";
    }
}




/*Output:
1 6 7 9 10 14    */
