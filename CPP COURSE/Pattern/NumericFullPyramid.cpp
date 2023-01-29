#include <iostream>
using namespace std;

int main() {
  cout<<"Enter n: ";
  int n;
  cin>>n;
  int count=1;
  for(int row=0; row<n; row++)
    {
      for(int col=0; col<n-row-1; col++)
        {
          cout<<" ";
        }
      count = row+1; 
      for(int col=0; col<row+1; col++)
        
        {
          cout<<count;
          count++;
        }
      count=row*2;
      for(int col=0; col< row; col++)
        {
          cout<<count;
          count--;
        }
      cout<<endl;
    }
  
}


/* Output:
n=5
    1
   232
  34543
 4567654
567898765   */
