#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr = {-1,11,1,2,1,-67,2,-81,11,-6,-1};
  int s = 0;
  int e = arr.size()-1;
 
 while(s<e)
 {
  if(arr[s]<0)
  {
    s++;
  }
  else{
    swap(arr[s],arr[e]);
    e--;
  }
 }

 for(int value: arr)
 {
  cout<<value<<" ";
 }
 
}
