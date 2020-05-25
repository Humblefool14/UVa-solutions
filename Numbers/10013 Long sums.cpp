#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
int arr[1000000];
int ar1[1000000];
int main(){
 int N;
 cin >> N;
 while(N--)
 {
     ll l; // length of blocks;
     cin >> l;
     ll i=0;
     int carry =0; // Setting carry;
     while((scanf("%d %d\n",&arr[i],&ar1[i])==2),i<l)
           {
               arr[i] = (arr[i]+ar1[i]+carry);// Add all three numbers.
               carry = arr[i]/10; // Find the carry 3 numbers add implies greatest will be 27
               arr[i]= arr[i]%10;
               i++;
           }
    for(ll i=l-1;i>=0;i--){
           cout << arr[i];
           }
    cout << endl;
 }
return 0;
}
