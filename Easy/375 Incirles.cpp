#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
const double EPSILON = 1e-6; // restrictive conditions
const double PI = 3.14159265358979323846;
int main(){
    int t;
    double b, h, b_prime, h_prime, r, sum;
    cin >>t; // test
    while (t--) {
        cin >> b >> h;
        sum = 0;
        bool flag = true;
        while(flag){
            r = (b/2)*tan((1/2)*atan((2 * h)/b));
            if (r<EPSILON){
                flag= false;
                break;
            }
            sum += 2 * PI * r;
            h_prime = h - 2 * r;
            b_prime = (b * h_prime) / h;
            h = h_prime;
            b = b_prime;
        }
        cout << sum << endl;
    }
    return 0;
}
