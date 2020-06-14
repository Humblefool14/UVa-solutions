#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
using namespace std;
unsigned int solve(unsigned int x);
int main(){
        unsigned int n;
        while (cin >>n){
            if (n)
                cout << solve(n);
            else
                cout << "0" << endl;
        }
    }
unsigned int solve (unsigned int i){
    unsigned int count = 1;
    while (i>1){
        if ((i&1)>0)
            return (count  + min(solve(i+1),solve(i-1)));
        count+=1+(1&i);
        i>>=1;
    }
    return count;
}
