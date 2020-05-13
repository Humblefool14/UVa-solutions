#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int mile(int k)
{
     int m = (k/30);
     return 10+(m*10);
}
int juice(int k)
{
    int m = k/60;
    return 15+(m*15);
}

int main()
{
     int t;
     cin >> t;
     while(t--)
     {
          int k;
          cin >> k;
          int sum_mile = 0;
          int sum_juice =0;
          while(k--)
          {    int x;
               cin >> x;
               sum_mile += mile(x);
               sum_juice += juice(x);
               cout << sum_mile <<"   " << sum_juice << endl;
          }
          if(sum_mile == sum_juice)
          {
              cout << "Case Mile Juice" << sum_mile << endl;
          }
          if (sum_mile < sum_juice) cout << "Case Mile  " << sum_mile << endl;
          else cout << "Case Juice" << sum_juice << endl;
     }
return 0;
}
