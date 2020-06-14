#include<iostream>
using namespace std;
int main(){
   int t;
   cin >> t;
   int cases =0;
   while(t--){
       cases++;
       int N,K,P;
       cin >> N >> K >> P;
       int res = (K+P)%N;
       if(res ==0) cout << "Case " << cases << ":  " << N << endl;
       else cout << "Case " << cases << ": " << res << endl;
   }
   return 0;
}
