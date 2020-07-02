#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    string numb;
    int loop_counter=0;
    while(getline(cin,numb)){
        int count;
        cin >> count;
        loop_counter++;
        cout << "Case : " <<loop_counter <<" " ; 
        for(int i=0;i<count;i++){
            int j,k;
            cin >> j >> k;
            int Mini= min(j,k);
            int Maxi= max(j,k);
            bool flag = true;
            for(int l=Mini;l<=Maxi;l++){
                if(numb[l]!=numb[Mini]){
                    flag = false;
                    break;
                }
            }
            if(flag) cout << "Yes"<< endl;
            else cout <<"No"<< endl;
        }
    }
return 0;
}
