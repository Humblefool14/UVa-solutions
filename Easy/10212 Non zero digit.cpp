#include<iostream>
using namespace std;
typedef unsigned long long ll;
int main(){
    ll N,M;
    while(cin >> N >> M){
        ll product =1;
        ll count2=0;
        ll count5=0;
        for(ll i= N-M+1;i<=N;i++){
            ll j =i;
            while(j%2==0){
                j=j/2;
                count2++;           // count no.of 2's
            }
            while(j%5==0){
                j=j/5;
                count5++;         // count of 5's
            }
            product *=j;
        }
        for(ll i=count5;i<count2;i++) product = (product*2)%10;   //
        for(ll i=count2;i<count5;i++) product = (product*5)%10;

        cout << (product%10)<< endl;
    }
return 0;
}
