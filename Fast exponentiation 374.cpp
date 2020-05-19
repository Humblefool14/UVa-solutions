#include<iostream>
using namespace std;

#define lli long long int
long long int Fastexponentiation(lli x , lli y,lli m)
{
    lli result =1;
 while(y>0)
 {
    if(y&1)
    {
        result = (result*x)%m;
    }
      x = (x*x)%m;
      y >>=1;
 }
 return result;
}
int main()
{
 lli x,y,m;
 cin >> x >> y >> m;
 lli z = Fastexponentiation(x,y,m);
 cout << z << endl;
 return 0;
}
