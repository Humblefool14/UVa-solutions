#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14256
double findcos(double a,double b,double c){
    return acos((a*a+b*b-c*c)/2*a*b);
}
int main(){
        int t; // testcases
        cin >> t;
        double r1,r2,r3;
        while(t--){
            cin >> r1 >> r2 >> r3;
            double alpha = findcos(r1+r3,r1+r2,r2+r3);
            double beta  = findcos(r2+r3,r2+r1,r1+r3);
            double theta = 180-alpha-beta;
            double area = sqrt((r1+r2+r3)*(r1)*(r2)*(r3));
            double sector1 = (alpha/180)*(PI)*(r1)*(r1);
            double sector2 = (beta/180)*(PI)*(r2)*(r2);
            double sector3 = (theta/180)*(PI)*(r3)*(r3);
            cout << setprecision(8)<<fixed<<endl;
            cout<< area-sector1-sector2-sector3 << endl;
        }
return 0;
}
