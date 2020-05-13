#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int a,b;
  while(cin >>a >>b)
  {
      if(a==-1 || b ==-1)
      {
          break;
      }
      if(abs(b-a) < 50)
      {
          cout << ((b-a)%100) << endl;
      }
      else cout << (b-a+100)%99 << endl;
  }
  return 0;
}
