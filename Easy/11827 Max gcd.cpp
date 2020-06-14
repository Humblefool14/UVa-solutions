#include<iostream>
#include <sstream>
using namespace std;
typedef long long int ll;
int gcd(int a, int b)
{ return b == 0 ? a : gcd(b, a % b); }
int main(){
    int t;
    ll numb[101];
    int n =0;
    cin >> t;
    for(int i=0;i<t;i++){
    string num;
    for(int i=0;i<t;i++){
            getline(cin,num);             // Get the damn string
            stringstream ss(num);             // string stream breaks into words/numbers
            while(ss >> numb[n]) n++;
        }
    int max1=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            max1 =max(max1,gcd(numb[i],numb[j]));
        }
     }
     cout << max1 << endl;
}
return 0;
}
