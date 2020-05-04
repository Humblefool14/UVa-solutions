#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
void One(ll x)
{
    ll sum=1;
    while(sum%x!=0)
    {
        sum = sum*10+1;
    }
    cout << sum << endl;
    int k=0;
    while(sum>0)
    {
        sum=sum/10;
        k++;
    }
    cout << k << endl;
}
int main()
{
    ll x;
    while(cin >> x)
    {
        if(x%2 == 0 || x%5 == 0) cout <<"Not possible" << endl;
        One(x);
    }
return 0;
}
