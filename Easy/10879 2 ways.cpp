#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
    int t,n,A,B,C,D;
    while(cin>>t){
        for(int i=1; i<=t; i++){
            cin>>n;
            int k = 2;
            while(n>0){
                if(n%k == 0){
                    A = k;
                    B = n/k;
                    break;
                }
                k++;
            }
            int a = k+1;
            while(n>0){
                if(n%a==0){
                    C = a;
                    D = n/a;
                    break;
                }
                a++;
            }
            printf("Case #%d: %d = %d * %d = %d * %d\n",i,n,A,B,C,D);
        }
    }
    return 0;
}
