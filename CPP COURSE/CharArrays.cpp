#include <iostream>
#include <string.h>
using namespace std;
void convertUpper(char arr[])
{
  int n = strlen(arr);
  for(int i=0;i<n;i++)
    {
      arr[i] = arr[i]-'a'+'A';
    }
  cout<<arr;
}

bool checkPalindrome(char word[])
{
  int i=0;
  int n=strlen(word);
  int j=n-1;

  while(i<=j)
    {
      if(word[i]!=word[j])
      {
        return false;
      }
      else
      {
        i++;
        j--;
      }
      return true;
    }
}
int getlength(char name[])
{
  int length = 0;
  int i=0;
  
  while(name[i] != '\0')
    {
      length++;
      i++;
    }
  return length;
}

void reverseCharArray(char name[])
{
  int s =0;
  int n = getlength(name);
  int e=n-1;

  while(s<=e)
    {
      swap(name[s],name[e]);
      s++;
      e--;
    }
  cout<<name;
}

void replaceSpaces(char sentence[])
{
  int i=0;
  int n=strlen(sentence);
  for(int i=0;i<n;i++)
    {
      if(sentence[i]==' ')
      {
        sentence[i]='@';
      }
    }
  cout<<"After replacing Spaces: "<<sentence<<endl;
}
int main() {
  // char name[100];
  // cout<<"Enter your name: "<<endl;
  // cin>>name;
  // cout<<"length: "<<getlength(name)<<endl;
  // cout<<"length: "<<strlen(name)<<endl;
  // cout<<"Initially "<<name<<endl;
  // reverseCharArray(name);
  
  // for(int i=0; i<8;i++)
  //   {
  //     cout<<"index: "<<i<<"value: "<<name[i]<<endl;
  //   }
  // int value = (int)name[8];
  //   cin.getline(name,100);
  // cout<<name<<endl;
  

  // char ch[100];
  // ch[0] = 'a';
  // ch[1] = 'b';

  // cout<<ch<<endl;

  char sentence[100];
  cin>>sentence;
  // cout<<"Palindrome check: "<<checkPalindrome(sentence)<<endl;

  convertUpper(sentence);
  
}
