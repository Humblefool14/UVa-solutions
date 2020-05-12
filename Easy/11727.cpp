#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
 int t;
 cin >> t;
 while(t--)
 {
   int x,y,z;
   cin >> x >> y >> z;
   int a = max(x,max(y,z));
   int b = min(x,min(y,z));

   if(x!=a && x != b) cout << x << endl;
   if(y!=a && y != b) cout << y << endl;
   if(z!=a && z != b) cout << z << endl;
 }
 return 0;
}
