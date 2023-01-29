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
    for (int j=0;j<column;j++)
      {
        cout<<"*"<<" ";
      }
    cout<<endl;
  }
}


/* pattern based on input given
Output:
*****
*****
***** */
