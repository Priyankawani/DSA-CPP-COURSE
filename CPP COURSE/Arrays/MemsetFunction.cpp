#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //to set all values as 0 or -1 for integral data types also. It will not work if we use it to set as other values. The reason is simple, memset works byte by byte.  
    int arr[5] = {1,2,3,4,5};

    memset(arr,0,sizeof(arr));

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    return 0;
}


