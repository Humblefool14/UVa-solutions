#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
   int N;
   int a;
   while(cin >>a,a>0){
       N=(10*a)/9;
       if((10*a)%9==0) cout << N-1 << " ";
       cout << N << endl;
   }
   return 0;
}
