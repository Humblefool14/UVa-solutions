#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
typedef vector<int> vi;
int main(){
    // 2 conditions no.of eggs < p
    // 2nd condition sum of wt of eggs < Q
  int t;
  cin >> t;
  for(int i=1;i<=t;i++){
    int n,p,q;
    cin >> n >> p >> q;
    int eggs[n];
    for(int j=0;j<n;j++){
        cin >> eggs[j];
    }
      int count =0;
      int sum =0;
      int count2=0;
      for(int j=0;j<n;j++){
           count++;
          if(count<=p){
              sum+=eggs[j];
              if(sum <q){
                  count2++;
              }
          }
      }
    cout << count2 << endl;
  }
return 0;
}
