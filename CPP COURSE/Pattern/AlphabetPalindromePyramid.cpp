#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter n: ";
  cin>>n;
  
  for(int row=0; row<n; row++)
    {
      char val = 'A';
      for(int col=0; col<row+1; col++)
        {
          cout<<val;
          val+=1;
        }
      val-=1;
      for(int col=0; col<row;col++)
        {
          val-=1;
          cout<<val;
        }
      cout<<endl;
    }
}

/*Output:
n=7
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
ABCDEFEDCBA
ABCDEFGFEDCBA    */
