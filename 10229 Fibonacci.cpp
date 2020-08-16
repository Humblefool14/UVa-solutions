#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define M 2147483647
//M =  2^(31)-1  Mersenne Prime
#define long long int lli
#define lli F[M]
int main()
{
  F[0]=1;
  F[1]=1;
  for (int i=2;i<=M; i++)
  {
       F[i]=F[i-1]+F[i-2];
  }
  int x,y;
  while(cin >> x >> y)
  {
      cout<< (F[x]%pow(2,y)) << endl;
  }
 return 0;
}
