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
  for(int i=0;i<t;i++){
    banks.clear();
    for(int j=0;j<10;j++){cin >> banks[j];}
    int count1=0;
    for(int k=0;k<10;k++){
        if(banks[k+1]>banks[k]){
            count1++;
        }
    }
    int count2=0;
    for(int k=0;k<10;k++){
        if(banks[k+1]<banks[k]){
            count2++;
        }
    }
    if(count1==9 || count2 ==9){
        cout << "Ordered" << endl;
    }
    else cout << "Not Ordered" << endl;
  }
  return 0;
}
