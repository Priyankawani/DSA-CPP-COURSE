#include <iostream>
#include<vector>
using namespace std;
int frstOccurence(vector<int> arr, int target)
{
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + ((end-start)/2);
  int ans = -1;
  while(start<=end)
    {
      if(arr[mid]==target)
      {
        ans = mid;
        end = mid-1;
      }
      else if(target<arr[mid])
      {
        end = mid-1;
      }
      else if(target>arr[mid])
      {
        start = mid+1;
      }
      mid = start+ ((end-start)/2);
    }
  return ans;
}

int main() {
    vector<int> v{1,3,4,4,4,4,6,7,9};
    int target = 4;
    int size = 9;
  
    int indexOfFirstOcc = frstOccurence(v, target);

    if(indexOfFirstOcc== -1)
    {
      cout<<"target not found"<<endl;
    }
  else
    {
      cout<<"target found at "<<indexOfFirstOcc<<" index"<<endl;
    }
    return 0;
}
