#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nique[100000];
int check(int x){
int count[10];
    memset(count,0,sizeof(count));
    int d;
    while(x>0){
        d= x%10;
        x= x/10;
        count[d]++;
    }
    for(int i=0;i<10;i++){
        if(count[i]>1){
            return false;
        }
    }
    return true;
}
void check_unique(){
    memset(nique,0,sizeof(nique));
    for(int i=0;i<100000;i++){
        if(check(i)){
            nique[i]++;
        }
    }
}
int main(){
    check_unique();
    int N,result;
    cin >> N;
    for(int x=1234;x<98765;x++){
        result = nique[x]*(x)*N;
        if(nique[result]){
            cout << result << endl;
        }
    }
return 0;
}
