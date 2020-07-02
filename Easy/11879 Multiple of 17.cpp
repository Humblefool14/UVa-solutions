#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
 /* long long int n;
  while(cin >>n,n){
  if(n>=10){
     int d= n%10;
     n = n/10;
     n= n-5*d;
     if(n%17==0){
       cout << "1" << endl;
     }else cout << "0" << endl;
 }else cout << "0"<< endl;
}
*/
string numb;
string null ="0";
      while(getline(cin,numb)){
          if(!numb.compare("0")){
              break;
          }
      long long int sum=0; // Initialization
      for(unsigned int i =0;i<numb.length();i++){
          sum = sum*10+(numb[i]-'0');
          sum = sum%17;
      }
      if(sum==0) cout << "1" << endl;
      else cout << "0" << endl;
  }
  return 0;
 }
/*
char s[110];
while(scanf("%s",s)){
  if(strcmp(s,"0")==0)
      break;
  int reminder=0;
  for(int i=0;s[i]!='\0';i++){
          reminder=reminder*10+(s[i]-48);
          reminder=reminder%17;}
  if(reminder==0)
      printf("1\n");
  else
      printf("0\n");
  }
 */
