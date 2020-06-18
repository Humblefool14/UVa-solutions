#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
typedef vector<int> vi;
vi banks;
int main(){
  int t;
  cin >> t;
  for(int i=1;i<=t;i++){
      int N;
      cin >>N;
      int sum;
      cout << "Case" << i << ": ";
      for(int j=1;j<N;j++){
          sum= sqrt(N-j);
          if(sum*sum ==(N-j) && j%sum==0){
              cout << j << " " ;
          }
      }
      cout << endl;
  }
  return 0;
}
