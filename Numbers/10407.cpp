#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
vector <ll> vi;

bool comp(const int &a, const int &b)
{
    return abs(a) < abs(b);
}
ll gcd(ll a, ll b)
{ return b == 0 ? a : gcd(b, a % b); }

int main(){
    ll x;
    while(cin >> x,x!=0)
    {
           vi.clear();
           vi.push_back(x);
           while (cin >> x, x != 0)
            vi.push_back(x);
         // sort the elemts
            sort(vi.begin(), vi.end(),comp);
        // find the differences
            for (size_t i = 0; i < vi.size() - 1; ++i)
            vi[i] = abs(vi[i + 1] - vi[i]);
        // Erase the last element (junk elem)
        vi.erase(vi.end() - 1);
        int g = vi[0];
        for (size_t i = 1; i < vi.size(); ++i)
            g = gcd(g, vi[i]);
        cout << g << endl;
    }
    return 0;
}
