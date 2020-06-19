#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
#include<map>
#include<vector>
using namespace std;
typedef long long int ll;
int main(){
     int t;
     cin >> t;
     ll n;
     for(int i=0;i<t;i++){
         cin >>n;
         int a,b,c;
         bool flag =false;
         for(a=0;a<=sqrt(n);a++){
             for(b=a;b<=sqrt(n);b++){
                 for(c=b;c<=sqrt(n);c++){
                     if(a*a+b*b+c*c ==n){
                         cout << a << b << c << endl;
                         flag = true;
                         break;
                        }
                    }
                }
         }
         if(!flag) cout << "-1" << endl;
        }
return 0;
}
