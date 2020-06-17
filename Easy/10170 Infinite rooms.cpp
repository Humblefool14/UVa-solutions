#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<bitset>
#include<cmath>
using namespace std;
typedef long long int ll;
int main(){
    ll s, d;
    while(cin >> s >>d,s>0&&d>0){
        ll i = s, sum = 0;
        while(1) {
            sum += i;
            if(sum >= d) {
                printf("%lld\n", i);
                break;
            }
            i++;
        }
    }
    return 0;
}
