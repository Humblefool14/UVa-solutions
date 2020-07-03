#include<iostream>
using namespace std;
typedef long long int ll;
#define MOD 2000000011
ll big(int n,int p){
    ll result=1;
    ll x=n;
    while(p>0){
        if(p%2==1){
            result*=x;
        }
        x=(x*x)%MOD;
        p=p/2;
    }
    return result%(MOD);
}
int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        cout << big(x,x-2)<< endl;
    }
return 0;
}
