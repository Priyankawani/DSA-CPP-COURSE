#include <iostream>
#include <string.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  string ans = "";
  int i=0;

  while (i<s.length())
  {
    if(ans[ans.length()-1]>=0 && ans[ans.length()-1] ==s[i])
    {
      ans.pop_back();
    }
    else
    {
      ans.push_back(s[i]);
    }
    i++;
  }

  cout<<ans;
}



/* i/p: abbaca
o/p:    ca            */
