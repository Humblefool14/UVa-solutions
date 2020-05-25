#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
ll bin(ll x,int choice)
{
    if(choice==1)
    {   ll sum =0;
        int i=0;
        // Hexdecimal]
        // convert to decimal
            while(x>0)
            {
                sum +=(x%10)*pow(16,i);
                x =x/10;
                i++;
            }
            return bin(sum,0);
        }
    if (choice==0)
    {   ll sum =0;
        // Decimal
        while(x>0)
        {
            sum+=x%2;
            x=x/2;
        }
     return sum;
    }
}
int main()
{
  int N;
  cin >> N;
  while(N--)
  {
      ll x;
      cin >> x;
      int b1 = bin(x,0);      int b2 = bin(x,1);
      cout << b1 << "  " << b2 << endl;
  }
 return 0;
}
