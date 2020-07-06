#include<iostream>
#include<bitset>
#include<bits/stdc++.h>
using namespace std;
int seen[10000];
int getcount(int t){
     int count =0;
     memset(seen,0,sizeof(seen));  // https://www.geeksforgeeks.org/memset-in-cpp/
     while(!seen[t]){
         seen[t]=1;                // Like earlier probs of Ackerman functions;
         count++;                  // Whichever number is visited lock it up.
         t*=t;
         t=t/100;
         t=t%10000;
     }
return count;
}
int main(){
     int t;
     while(cin >> t){
         cout << getcount(t) << endl;
     }
return 0;
}
