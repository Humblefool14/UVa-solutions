#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
void Sieve()
{
  int arr[1000000];
  ll s =1000000;
  arr[0]=0;
  arr[1]=1;
  for (ll i=2;i<s;i++)
  { arr[i]=1; }
  // bool setting for 1's
  for(ll i=2;i<s;i++)
  {
    if(arr[i]==1)
    {  for(ll j=i*i;j< s;j=+i)
        {
            arr[j]=0;
        }
    }
  }
  for(ll i=2;i<s;i++)
  {
      if(arr[i]) cout << i << endl;
  }
}
int main()
{
  Sieve();
  return 0;
}
