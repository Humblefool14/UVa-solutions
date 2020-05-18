#include<iostream>
#include<cstdio>
using namespace std;
typedef  long long ll;
int gcd(int a, int b)
{ return b == 0 ? a : gcd(b, a % b); }
int main(){

    int N;
    ll G;
    while(cin >>N,N>0)
    {
      G = 0;
      for(int i = 1; i < N; i++){
        for(int j = i+1; j <= N; j++){
          G+=gcd(i,j);
        }
      }
      cout << G << endl;
    }
    return 0;
}
