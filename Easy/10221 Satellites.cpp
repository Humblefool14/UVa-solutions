#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
int main(){
    string str;
    int d;
    float angle;
    while(scanf("%d %f",&d,&angle)==2){
        cin >> str;
        if(str=="min"){
            angle = (angle/60);
        }
        while(angle>360) angle-=360;
        if(angle>180) angle= 360-angle;
        cout << setprecision(6) << fixed;
    float result  = 2*(6440+d)*sin((angle/2)*PI/180); // Chord length 
    float result1 = (6440+d)*(angle*(PI/180));       // Arc length
    cout << result1 <<"  "<< result << endl;
    }
return 0;
}
