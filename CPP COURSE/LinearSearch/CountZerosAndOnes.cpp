#include<iostream>
using namespace std;

void CountNumbers(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zeroCount+=1;
        }
        else
        {
            oneCount+=1;
        }
    }
    cout<<"Number of 0's: "<<zeroCount<<endl;
    cout<<"Number of 1's: "<<oneCount<<endl;
}

int main()
{
    int arr[10] = {0,1,0,1,0,0,0,1,1,1};
    int size = 10;

    CountNumbers(arr,size);

    return 0;
}