#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
   int x,y;
   int t;
   string s;
   while(cin >> t){
        cin >> x >> y;
        s="";
        for(int i=0;i<x;i++){
            if(i<x-y){
                s+='0';
            }
            else s+='1';
        }
        do{
            cout << s << endl;
        }while(next_permutation(s.begin(),s.end()));
        cout << endl;
   }
return 0;
}
