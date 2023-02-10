#include <iostream>
using namespace std;
int main() {
  cout<<"Enter n: ";
  int n;
  cin>>n;

  for(int row=0; row<n; row++)
    {
      for(int col=0; col<(2*row)+1; col++)
        {
          if(col%2==0)
          {
            cout<<row+1;
          }
          else
          {
            cout<<"*";
          }
        }
      cout<<endl;
    }
    for(int row=0; row<n; row++)
      {
        for(int col=0; col<(2*n)-(2*row)-1;col++)
          {
            if(col%2==0)
            {
              cout<<n-row;
            }
            else
            {
              cout<<"*";
            }
          }
        cout<<endl;
      }
}

/*Output:
n=8
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
6*6*6*6*6*6
7*7*7*7*7*7*7
8*8*8*8*8*8*8*8
8*8*8*8*8*8*8*8
7*7*7*7*7*7*7
6*6*6*6*6*6
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1           */
