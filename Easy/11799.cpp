#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
 int t;
 cin >>t;
 while(t--)
 {
   int N;
   cin >> N;
   int m =0;
      while(N--)
      {    int x;
           cin >>x;
            m= max(m,x);
      }
    cout << m << endl;
   }
  return 0;
}
