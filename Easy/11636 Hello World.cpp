#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int hello(int x)
{
  int count =0;
  while(x>0)
  {
    x=x/2;
    count++;
  }
return count;
}
int main()
{
  int x;
  while(cin >> x,x>0)
  {
    int z = hello(x-1);
    cout << z << endl;
  }
  return 0;
}
