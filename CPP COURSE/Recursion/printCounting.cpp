#include <iostream>
using namespace std;
void print(int n)
{
  //Base case
  if(n==0)
  {
    return;
  }

  //processing
  cout<<n<<endl;

  //Recursive relation
  print(n-1);
}


int main() {
    int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  print(n);
  cout<<endl;
  
}
