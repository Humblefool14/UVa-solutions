#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
typedef vector<int> vi;
vi banks;
int main(){
  int n,b,c,v;
  while(cin >> n >> b,n>0 && b>0){
     banks.clear();
     for(int i=0;i<n;i++){
         cin >> banks[i];
     }
     for(int i=0;i<n;i++){
         cin >> b >> c >> v;
         banks[b]-=v;
         banks[c]+=v;
     }
     bool flag = false;
     for(int i=0;i<n;i++){
         if(banks[i]<0){
             flag= true;
             break;
         }
     }
     if(flag){
         cout << "N" << endl;
     }
     else cout << "S" << endl;
  }
return 0;
}
