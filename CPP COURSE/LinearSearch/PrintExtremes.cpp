#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    int start = 0;
    int end = size-1;
    for(int i=0; i<size;i++)
    {
        if(start<end)
    {
        
        cout<<arr[start]<<" "<<arr[end]<<" ";
        start++;
        end--;
    }
    else if(start==end)
    {
        cout<<arr[end];
        break;
    }
    }
    
}