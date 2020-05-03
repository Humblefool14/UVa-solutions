#include<iostream>
using namespace std;

#define lli long long int
long long int Fastexponentiation(lli x , lli y)
{
    lli result =1;
 while(y>0)
 {
    if(y&1)
    {
        result = result*x;
    }
      x = x*x;
      y >>=1;
 }
 return result;
}
int main()
{
 lli x,y;
 cin >> x >> y;
 lli z = Fastexponentiation(x,y);
 cout << z << endl;
 return 0;
}
