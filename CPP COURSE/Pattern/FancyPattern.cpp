#include <iostream>
using namespace std;

int main() {
  cout<<"Enter n: "<<endl;
  int n;
  cin>>n;
  int num = 1;
  for(int i=0; i<n; i++)
    {
      for(int j=0; j< (2*i)+1; j++)
        {
          if(j%2==0)
          {
            cout<<num;
            num++;
          }
          else
          {
            cout<<"*";
          }
        }
      cout<<endl;
    }
    int start = num - n; // 22-6 = 16
    for(int i=0; i<n; i++)
    {
      int decr = start; //16 11
      for(int j=0; j<(2*(n-i))-1; j++)
        {
          if(j%2==0)
          {
            cout<<decr;
            decr++; //22 16
          }
          else
          {
            cout<<"*";
          }  
        }
      start = start - (n-i-1); //11 
      cout<<endl;
    }
  
}


/* Output:
n=6
1
2*3
4*5*6
7*8*9*10
11*12*13*14*15
16*17*18*19*20*21
16*17*18*19*20*21
11*12*13*14*15
7*8*9*10
4*5*6
2*3
1
