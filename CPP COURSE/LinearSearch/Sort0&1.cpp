#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr {1,0,1,1,1,0,0,1,0,1,0};

    int s = 0;
    int e = arr.size()-1;
    int i=0;

    while(s<=e)
    {
        if(arr[i]==0)
        {
            swap(arr[i],arr[s]);
            i++;
            s++;
        }
        else{
            swap(arr[i],arr[e]);
            e--;
        }
    }

    for(auto value : arr)
    {
        cout<<value<<" ";
    }
}