#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<bitset>
using namespace std;
typedef long long int ll;
int main(){
    int bach,spin;
    while(cin >> bach >>spin,bach>0 && spin >0){
        int bs[10000];
        int ss[10000];
        for(int i=0;i<bach;i++){
            cin >> bs[i];
        }
        sort(bs,bs+bach);
        for(int i=0;i<spin;i++){
            cin >> ss[i];
        }
       if(bach-spin <=0) cout << "0" << endl;
       else cout << abs(bach-spin) << " " << bs[0] << endl;
    }
return 0;
}
