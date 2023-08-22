#include<iostream>
using namespace std;
bool findArrayNum(int arr[],int size,int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int key;
    cout<<"Enter number"<<endl;
    cin>>key;
    if(findArrayNum(arr,size,key))
    {
        cout<<"Found Num";
    }
    else
    {
        cout<<"Not Found number";
    }
    return 0;
}