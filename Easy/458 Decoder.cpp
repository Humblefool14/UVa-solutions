#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
   string x;
   while(cin >>x)
   {
     int len = x.length();
     for(int i =0; i<len;i++)
     {
         char c = x[i]-7;
         cout << c ;
     }
     cout << endl;
   }
 return 0;
}
