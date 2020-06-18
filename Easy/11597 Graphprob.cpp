#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
 int n;
 int cases=0;
 while(cin >>n,n>0){
   if(n%2!=0) cout << "Not possible" << endl;
   int k=n;
   int count =0;
   while(k>0){
       k=k/2;
       count++;
   }
   cases++;
   cout << "Case" << cases << ": " << count << endl;
}
return 0;
}
