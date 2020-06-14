#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
typedef vector<int> vi;
vi arr;
int find(int Q,int N){
    for(int i =0;i<=N;i++){
        if(arr[i]==Q){
            return i;
        }
    }
    cout << Q << "Not found" << endl;
    return -111;
}
int main()
{
  int N,Q;
  while(cin >> N >> Q){
      if(N==0 && Q ==0) break;
  arr.clear();
  arr[N+1];
  for(int i=0;i<N;i++){
      cin >> arr[i];
  }
  sort(arr.begin(),arr.end());
  for(int i=0;i <Q;i++){
      cin >> Q;
      cout << "Case# " << i << " :" << endl;
      int k = find(Q,N);
      if(k>=0){
          cout << Q << "is found at " << k << endl;
    }
  }
}
 return 0;
}
