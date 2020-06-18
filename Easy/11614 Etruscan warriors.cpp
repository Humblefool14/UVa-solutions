#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    ll n,sum;
    while(cin >> t){
        for(int i = 0; i < t; i++){
            cin >> n;
            sum = (-1 + sqrt(1+8*n))/2;
            cout << sum << endl;
        }
    }
    return 0;
}
