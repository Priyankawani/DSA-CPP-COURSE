#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter n: "<<endl;
  cin>>n;
  for(int row=0; row<n; row++)
    {
      for(int col=0; col< n-row-1; col++)
        {
          cout<<" ";
        }
      cout<<"1";

      if(row!=0 && row != n-1)
      {
        for(int col=0; col<(2*row)-1; col++)
          {
            cout<<" ";
          }
        cout<<row+1;
      }
      int count = 2;
      
      if(row == n-1)
      {
        for(int col=1; col<n; col++)
          {
            cout<<" "<<count;
            count++;
          }
        
        
      }

      
      cout<<endl;  
    }
  
}


/*Output:

n=5
    1
   1 2
  1   3
 1     4
1 2 3 4 5   */
