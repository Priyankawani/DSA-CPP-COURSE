#include <iostream>
using namespace std;

int main() {
int row;
int column;
cout<<"Enter number of rows: "<<endl;
cin>>row;
cout<<"Enter number of columns: "<<endl;
cin>>column;
for(int i=0;i<row;i++)
  {
    //first row and last row
    if(i==0 || i==row-1)
    {
      for (int j=0;j<column;j++)
        {
          cout<<"* ";
        }
    }
    else
    {
      //remaining rows
      cout<<"* ";
      for(int spaces=0; spaces<column-2;spaces++)
        {
          cout<<"  ";
        }
       //last star
       cout<<"* ";
    }
    cout<<endl;
    
  }
}


/* Output:
row = 3
col = 5
* * * * *
*       *
* * * * *  */
