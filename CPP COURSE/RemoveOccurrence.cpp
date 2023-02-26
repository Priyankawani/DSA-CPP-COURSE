#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string input;
  cin>>input;
  string part;
  cin>>part;

  int pos = input.find(part);
  while(pos != string::npos)
    {
      input.erase(pos,part.length());
      pos = input.find(part);
    }
  cout<<input;
}

/*
i/p:   daabcbaabcbc
part:  abc
o/p:   dab    */
