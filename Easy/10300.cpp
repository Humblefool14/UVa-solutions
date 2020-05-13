#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
 int t;
 cin >> t; 
 while(t--)
 {
    int count;
    cin >> count;
    int sum =0;
   while(count--)
   {
     int x,y,z;
     cin >> x >> y >> z;
     sum+=x*z;
   }
   cout << sum << endl;
 }
 return 0;
}
