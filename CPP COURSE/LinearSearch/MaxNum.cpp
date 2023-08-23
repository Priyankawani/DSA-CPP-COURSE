#include<iostream>
using namespace std;

void MaxNum(int arr[],int size)
{
    int max = 0;
    for(int i=0;i<size;i++)
    {
      if(max < arr[i])
      {
        max = arr[i];
      }
     
    }
    cout<<"Max Number is "<<max;
}

int main()
{
    int arr[10] = {20,6,15,8,9,18,1,4,5,19};
    int size = 10;
    MaxNum(arr, size);
    return 0;

}