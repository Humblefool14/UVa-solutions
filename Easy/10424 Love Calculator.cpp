#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int count(int n){
    int sum =0;
    while(n>=10){
        while(n>0){
        sum += n%10;
        n=n/10;
    }
    n = sum;
  }
  return n;
}
int main(){
     string name;
     int sum=0;
     while(getline(cin,name)){
     for(unsigned int i=0;i<name.length();i++){
             if(name[i]>='A' && name[i]<='Z'){
                 sum+=name[i]-'A';
              }
             if(name[i]>='a' && name[i]<='z'){
                 sum+=name[i]-'a';
             }
         }
    int m= count(sum);
    string name2;
    getline(cin,name2);
    int sum1=0;
     for(unsigned int i=0;i<name2.length();i++){
             if(name2[i]>='A' && name2[i]<='Z'){
                     sum1+=name2[i]-'A';
                  }
             if(name2[i]>='a' && name2[i]<'z'){
                     sum1+=name2[i]-'a';
                 }
             }
     int n =count(sum1);
     if(m>n){
         int tmp = m;
         m= n;
         n=tmp;
     }
     cout << (m*100/n) <<" %" << endl;
 }
return 0;
}
