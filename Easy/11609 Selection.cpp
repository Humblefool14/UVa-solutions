#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
typedef long long int ll;
ll Fastexponentiation(int y)
{
    ll x=2;
    ll result =1;
 while(y>0)
 {
    if(y&1)
    {
      result = (result*x);
    }
      x = (x*x);
      y >>=1;
 }
 return result;
}
int main(){
// Test case ; for 1 player {1}
// Test case : for 2 players {1}{2}{1,2}{2,1} == 4
// Test case ;; for 3 players {1}{2}{3}{1,2}{2,1}{1,3}{3,1}{2,3}{3,2}{1,2,3}{2,1,3}{3,1,2} = 12
//Test case ;; for 4 players {1}{2}{3}(4){1,2}{2,1}{1,3}{3,1}{1,4}{4,1}{2,3}{3,2}{2,4}{4,2}{3,4}{4,3}
                            // {1,2,3}{2,1,3}{3,1,2}{1,2,4}....
                             //{2,1,4}{4,1,2}{3,1,4}}{3,2,4}{}
                            // {1,2,3,4}{2,1,3,4}{3,1,2,4}{4,1,2,3}  == 32
// The pattern after checking seems to be in n*(2^(n-1))
// We don't want unique sets.
// We only want sets which have different head file. 
int n;
while(cin >>n,n>0){
    ll k = Fastexponentiation(n-1);
    k *=n;
    cout << k << endl;
}
return 0;
}
