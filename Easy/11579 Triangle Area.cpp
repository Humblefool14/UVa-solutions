#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
float art(float x,float y,float z){
    if(x+y >z && y+z >x && z+x>y){
        float s = x+y+z/2;
        return sqrt((s-x)*s*(s-y)*(s-z));
    }
    else return 0.0;
}
int main(){
 int t;
 cin >> t;
 for(int i =0;i<t;i++){
     int n;
     cin >> n;
     float arr[10000]; // N max = 10000
     for(int j=0;j<n;j++) cin >> arr[j];
     sort(arr,arr+n); // Sort the lengths.
     float area=0.0;
     for(int i=0;i<n;i++){
             area= max(area,art(arr[i],arr[i-1],arr[i-2]));
     }
    cout << area << endl;
 }
return 0;
}
