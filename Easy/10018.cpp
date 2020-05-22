#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
ll reverse(ll x)
{ ll sum =0;
  while(x>0)
  {
      sum = sum*10+x%10;
      x =x/10;
  }
  return sum;
}
int main()
{
  ll x,k;
  int n;
 cin >> n;
 for(int i =1;i<n;i++)
 {
   cin >> x;
   for(int j=1;;j++)
   {
      k = reverse(x);
      k +=x;
      x=k; // updating x;
      if(k == reverse(k)) // checking the palindrome condition.
      {
        cout << j << "  "<< k << endl;
        break;
    }}}
 return 0;
}
