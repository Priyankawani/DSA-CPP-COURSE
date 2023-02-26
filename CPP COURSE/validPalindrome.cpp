#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(string s,int i, int j)
{
  while(i<=j)
    {
      if(s[i] != s[j])
      {
        return false;
      }
      else
      {
        i++;
        j--;
      }
    }
  return true;
}

bool validPalindrome(string input)
{
  int i=0;
  int j = input.length()-1;
  bool output = false;
  while(i<=j)
    {
      if(input[i] != input[j])
      {
       return checkPalindrome(input,i+1,j)||checkPalindrome(input,i,j-1);
      }
      else
      {
        i++;
        j--;
      }
  }
      return true;
}

int main() {
    string input;
  cin>>input;
  bool output = validPalindrome(input);
  cout<<output;
}


/* i/p:  abca
o/p:     true

*/
