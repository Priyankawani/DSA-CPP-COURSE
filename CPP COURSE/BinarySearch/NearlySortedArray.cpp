#include <iostream>
#include <cmath>
#include <limits.h>
#include <vector>
#include <algorithm>
using namespace std;

void printnumsay(vector<int> nums)
{
    for (auto value : nums)
    {
        cout << value << " ";
    }
    cout<<endl;
}

int binarySearch(vector<int> arr, int target){
    int start = 0; int end = arr.size(); int mid = (start+end)/2; 

    while(start<=end){
        if(arr[mid] == target){
            return mid;
        }
        if(mid-1 >=0 && arr[mid-1] == target){
            return mid-1;
        }
        if(mid+1<=arr.size() && arr[mid+1] == target){
            return mid+1;
        }
        else if(target<arr[mid]){
            //search left side
            end = mid - 2;
        }
        else{
            // search right side
            start = mid + 2;
        }

        mid = (start + end)/2;
    }
    return -1;
}

int main()
{
    vector<int> arr{10,3,40,20,50,80,70};
    int target = 50;
    // sort(arr.begin(),arr.end());
    int indexOfTarget = binarySearch(arr, target);
    printnumsay(arr);

    if(indexOfTarget == -1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"found, index value is: "<<indexOfTarget<<endl;
    }
    
    


    // printnumsay(arr);

    return 0;
}
