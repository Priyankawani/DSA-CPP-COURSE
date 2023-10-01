#include<iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr {0,1,1,2,1,0,2,0,2,1,0};
  int l=0;
  int m=0;
  int h=arr.size()-1;

  while(m<=h)
  {
    if(arr[m]==0)
    {
      swap(arr[m],arr[l]);
      m++;
      l++;
    }
    else if(arr[m]==1)
    {
      m++;
    }
    else if(arr[m]==2)
    {
      swap(arr[h],arr[m]);
      h--;
      m++;
    }
  }

  for(int value: arr)
  {
    cout<<value<<" ";
  }

}