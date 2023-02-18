#include <iostream>
using namespace std;

int main() {
  cout<<"Enter n: "<<endl;
  int n;
  cin>>n;

  for(int i=0; i<n && n<=9; i++)
    {
      for(int j=0; j< (17-((2*i)+1))/2; j++)
        {
          cout<<"*";
        }
      for(int j=0; j<(2*i)+1; j++)
        {
          if(j%2==0)
          {
            cout<<i+1;
          }
          else
          {
            cout<<"*";
          }
        }
      for(int j=0; j< (17-((2*i)+1))/2; j++)
        {
          cout<<"*";
        }
      cout<<endl;
    }
  
}

/* Output:
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
***6*6*6*6*6*6***
**7*7*7*7*7*7*7**
*8*8*8*8*8*8*8*8*
9*9*9*9*9*9*9*9*9    */
