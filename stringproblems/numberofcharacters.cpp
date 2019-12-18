#include<iostream>
#include<string>
using namespace std;

int count(char ch) {
  string str;
  getline(cin, str);
  int count = 0;
  cin >> ch;
  for(int i=0; i < str.length(); i++)
  {
    if(str[i] == ch){
    count++;
  }
  }
  return count;
  /* code */
}
int main()
{
  extern string str;
  char c;
  cout<< count(c);
  return 0;
}
