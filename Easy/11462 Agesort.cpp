#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void prin(int x){
    for(int i=0;i<x;i++){
        cout << x <<"";
    }
}
int main(){
 int x;
 while(cin >> x){
     int count[101];
     memset(count,0,sizeof(count));
     int age;
     while(x--){
        cin >> age;
        count[age]++;
     }
     for(int i=0;i<100;i++){
         if(count[i]){
             prin(count[i]);
         }
     }
}
return 0;
}
