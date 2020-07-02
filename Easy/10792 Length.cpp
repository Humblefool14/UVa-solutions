#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
int main(){
 int t;
 cin >>t;
 while(t--){
   float  r,d,h1;
    cout << setprecision(4) << fixed;
    cin >> r >> d >> h1 ;
    float AB = 2*sqrt(r*r-(r-d)*(r-d));
    cout << AB << endl;
    float alpha = asin((r-h1)/r)*180/PI;
    float beta  = asin((r-d)/r)*180/PI;
    float theta = alpha-beta;
    cout << sin(theta) << endl;
    float result = AB*abs(sin(theta))+h1;
    cout << result << endl;
 }
 return 0;
}
