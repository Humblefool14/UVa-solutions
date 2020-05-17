#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
 int t;
 int k=0;
 while(cin >> t,t>0)
 {
   int n=0;
   while(n*(n-3)<(2*t))
   {
     n++;
   }
   ++k;
   cout << "Case" << "  "<< k << " " << n << endl;
  }
 return 0;
}
