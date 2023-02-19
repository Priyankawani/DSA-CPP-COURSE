#include <iostream>
#include<assert.h>
using namespace std;

int main() {
  int n;
  cout<<"Enter n: ";
  cin>>n;
  assert(n%2==1);
  cout<<"*"<<endl;
  for(int i=0; i<n/2 + 1; i++)
    {
      cout<<"*";
      int start = 1;
      for(int j=0; j<i+1; j++)
        {
          cout<<start;
          start++;
        }
      int lastNum = i;
      for(int k = 1; k<=i; k++)
        {
          cout<<lastNum;
          lastNum--;
        }
      cout<<"*"<<endl;
    }
  for(int i=0; i<n/2 ; i++)
    {
      cout<<"*";
      int start = 1;
      for(int j=0; j<(n/2) - i; j++)
        {
          cout<<start;
          start++;
        }
      start = start - 2;
      for(int j=0; j<(n/2) - i -1 ; j++)
        {
          cout<<start;
          start--;
        }
      cout<<"*"<<endl;
    }
  cout<<"*";
}


/* Output:
n=11
*
*1*
*121*
*12321*
*1234321*
*123454321*
*12345654321*
*123454321*
*1234321*
*12321*
*121*
*1*
*                       */
