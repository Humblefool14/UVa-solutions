#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
int first;
cin >> first;
int a,b,x,y;
while(first--){
    cin >> a >> b;
    if(a>=b && (a+b)%2==0){
        x=(a+b)/2;
        y=(a-b)/2;
        cout << x <<"  " << y << endl;
    }
    else cout << "Impossible" << endl;
  }
return 0;
}
