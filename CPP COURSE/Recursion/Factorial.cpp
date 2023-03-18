#include <iostream>
using namespace std;

int factorial(int n)
{
  cout<<"Function is called for n: "<<n<<endl;
  //base condition
  if(n==1)
  {
    return 1;
  }
  //Recursion relation
  int ans = n*factorial(n-1);
  return ans;
}

int main() {
    int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int ans = factorial(n);
  cout<<"ans is: "<<ans<<endl;
}
