#include <iostream>
using namespace std;

int main()
{
  int n;
  
  cin>>n;
  for(int row=0;row<n;row++)
    {
      int count = 1;
      for(int col=0;col<=row;col++)
        {
          cout<<count<<" ";
          count ++;
        }
      cout<<endl;
    }
  
}


/* Output:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6   */
