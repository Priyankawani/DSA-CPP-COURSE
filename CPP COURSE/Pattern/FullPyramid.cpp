#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter number: ";
  cin>>n;

  for(int row = 0; row<n; row++)
    {
      //spaces
      for(int col=0; col<n-row-1; col++)
        {
          cout<<" ";
        }
       for(int col=0; col<=row; col++)
         {
           cout<<"* ";
         }
      
      
      cout<<endl;
    }
}

/*output:

n=6
      * 
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * *        */
