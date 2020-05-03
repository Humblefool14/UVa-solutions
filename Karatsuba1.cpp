#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;
int count(int x)
{   int count=0;
    while(x>0){ x=x/10; count++; }
    return count;}
int pwer(int count)
{   int z;
    if (count%2 == 0){z = pow(10,(count)/2);}
    if (count%2 != 0){z = pow(10,(count+1)/2);}
    return z;
}
int karatsuba(int x, int y)
{   int count0;
    int count1 = count(x);
    int count2 = count(y);
    if (count1>=count2){count0 = count1;}
     else count0 = count2;

   count0 = pwer(count0);

    int p,q,r,s;
     q = x%count0;
     p = x/count0;
     r = y%count0;
     s = y/count0;

 int z1,z0,z2;
    z0 = q*r;
    z2 = p*s;
    z1 = (q+p)*(r+s)-z0-z2;
 int z = z2*(count0)*(count0)+z1*count0+z0;
    return z;
}
int main()
{
 int x,y;
 cin >> x >> y;
 int z = karatsuba(x,y);
 cout << z << endl;
 return 0;
}
