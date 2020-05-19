#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
  int t;
  cout << "Perfection Output" << endl;
  while(cin >> t,t>0)
  {
     int sum=0;
    for(int i=2;i<=(t/2);i++)
    {
      if(t%i==0)
      {
          sum+=i;
      }
    }
    if(sum > t) cout << t << "  Abundant" << endl;
    if(sum==t)  cout << t << "  Perfect" << endl;
    if(sum<t) cout << t<< "   Deficient" << endl;
  }
  cout << "End of Output"<< endl;
return 0;
}
