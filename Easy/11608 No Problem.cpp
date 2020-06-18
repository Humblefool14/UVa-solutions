#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
int first;
int cases=0;
while(cin >> first,first>0){
    int probs[12],contests[12],count;
    for(int i=0;i<12;i++){cin >> probs[i];}
    for(int j=0;j<12;j++){cin >> contests[j];}
    cases++;
    cout << "Case " << cases << ": " << endl;
    if(first > contests[0]) {
        cout << "No Problem! :D" << endl;
        count = first-contests[0];             // Crux of problem.
    }
    else {
        cout << "No Problem! :(" << endl;
        count = first;                      // Count remains constant and Contest is cancelled
    }
    for(int i=1;i<12;i++){
        count+=probs[i-1];
        if(count>contests[i]){
            cout << "No Problem! :D" << endl;
            count=count-contests[i];
        }
        else {
            cout << "No Problem! :(" << endl;
        }
    }
}
return 0;
}
