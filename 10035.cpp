#include<iostream>
using namespace std;
#define ll long long

int count(ll x, ll y)
{
  int m,n;
  int carry=0;
  while((x>0)|(y>0))
  {
     bool f= false;
     m=x%10;
     n=y%10;
     if(m+n>=10)
     {
       carry++;
       f = true;
     }
     x=x/10;
     y=y/10;
     if(f)
     { x++;}
  }
  return carry;
}
int main()
{
  ll x,y;
  while( cin >> x >> y)
  {
     if((x==0)&(y==0))
     { break;
     }
     int z = count(x,y);
     cout << z << endl;
  }
  return 0;
}
