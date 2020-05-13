#include<bits/stdc++.h>
#include<iostream>

using namespace std;
#define lli long long int
int sum(lli x)
{
  int count=0;
 while(x>0)
 { count+= x%10;
   x=x/10;
 }
 if (count>9)
  {
      count= sum(count);
      // Recursive condition as defined in problem
  }
 return count;
}
int main()
{
  lli x;
  while(cin >> x)
  {
     if(x==0)
      {
          break;
      }
     int z = sum(x);
     cout << z << endl;
  }
  return 0;
}
