#include<bits/stdc++.h>
#include <iostream>
#include <set>
#include <utility>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

ll gcd(ll a, ll b)
{ return b == 0 ? a : gcd(b, a % b); }

int main() {
    ll step, mod;
    while (cin >> step >> mod) {
        cout << step << "    " << mod << "   ";
        if (gcd(step, mod) == 1) {
             cout << "Good Choice" << endl;
        } else {
            cout << "Bad Choice" << endl; 
        }
    }
    return 0;
}
