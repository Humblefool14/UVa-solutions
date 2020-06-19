#include<iostream>
using namespace std;
typedef long long int ll;
int sum(ll n){
  int count=0;
  if(n<10) return n;
 else while(n>0){
     count+=n%10;
    n=n/10;
   } return sum(count);
}
int main(){
  ll n;
  while(cin >> n){
     int k= sum(n);
     cout << k << endl;
  }
  return 0;
}
