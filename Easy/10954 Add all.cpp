#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
priority_queue< ll, vector<ll> ,greater<ll> > pq;
int main()
{
    ll n,a,x,y;
    while(cin >>n,n>0){
        for(int i=0;i<n;i++){
            cin >> a;
            pq.push(a);
        }
        ll count =0;
        while(pq.size()>1){
            x = pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            count+=(x+y);
            pq.push(x+y);
        }
        cout << count << endl;
        pq.pop();
    }
return 0;
}
