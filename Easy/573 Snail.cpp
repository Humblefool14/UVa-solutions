#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    float H,D,U,F,x;
    // height H total distance
    // U distance climbed during day
    // D slipped during night
    while(cin >> H >> U>> D >>F){
        if(H==0) break;
        x=(U/100)*F;  // Constant Fatigue calculation
        float h=0;
        for(int i=1;;i++){
            h+=U;
                if(h>H){cout<< "success on day "<< i << endl;
                break;}
            h-=D;
            if(h<0){cout << "failure on day "<< i << endl;
                break;}
            U=U-x;
                if(U<0){U=0;
                }
            }
        }
return 0;
}
